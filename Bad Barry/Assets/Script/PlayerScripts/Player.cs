using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.UI;
using System.Collections.Generic;
using System;

public class Player : MonoBehaviour {

	public int life = 100;
	public int maxLife = 100;
	public int armor = 0;
	public float speed = 0.5f;
	public int baseDamage = 0;
	public int direction = -1;
	public int shootDirection = 1;
	public GameObject weapon;

	private Animator bothAnimator;
	private Animator torsoAnimator;
	private Animator legAnimator;

	public bool dead = false;
	private bool isShooting = false;


	public float fireRate = 1f;
	private float time;

	//normally will receive its base experience on load
	public float experience = 0;
	public float neededExperience = 100;
	public int lvl = 0;

	private HUDGame hudGame;
	private GameObject HUD;

	public int strength = 0;
	public int agility = 0;
	public int inteligence = 0;
	public int vitality = 0;

	public GameObject knifeRange;

	public GameObject canvasDeath;


	public DateTime lastDateTime;
	//skill
	public bool skillActivate = false;
	public float timeToStopSkill = 5;
	public float reloadingTime = 10;
	public float skillTimer = 0;
	
	public bool reloading = false;
	public float reloadingTimer = 0;
	public DateTime currentTime;


	// Use this for initialization
	void Start () {
		Time.timeScale = 1;
		CrossPlatformInputManager.SetButtonUp("Fire");

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		strength = behave.getStrength();
		agility = behave.getAgility();
		inteligence = behave.getInteligence();
		vitality = behave.getVitality();
		isShooting = false;


		maxLife = vitality * 10;
		baseDamage = strength;
		speed = 1 + agility * 0.01f;
		life = maxLife;
		behave.life = life;
		behave.maxLife = maxLife;


		experience = behave.experience;
		if(life <= 0){
			life = maxLife;

		}
		neededExperience = behave.neededExperience;



		HUD = GameObject.FindGameObjectWithTag ("HUD");

		//HUD
		hudGame = HUD.GetComponent<HUDGame> ();

		hudGame.initLife ();

		hudGame.takeDamage();
		hudGame.incrementXp ();


		bothAnimator = transform.GetComponent<Animator> ();
		legAnimator = transform.Find("Legs").GetComponent<Animator>();
		torsoAnimator = transform.Find("Torso").GetComponent<Animator>();


		torsoAnimator.SetInteger("Weapon",behave.selectedWeapon);


		behave.pause = false;
	}
	
	// Update is called once per frame
	void Update () {

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();


		if (!behave.pause) {


			if (!dead) {
				Move ();
				Shoot ();
			}

			time = time + Time.deltaTime;


			//LOGICA PARA TEMPO DA SKILL DPS DE CLICADA
			if (skillActivate) {
				skillTimer += Time.deltaTime;
				var PanelSurvivor = GameObject.FindGameObjectWithTag ("SkillSurvivor") as GameObject;
				PanelSurvivor.GetComponent<Animator> ().SetBool ("SurvivorActivate", true);
				
				
			}
			
			//PENSAR NA LOGICA DE QUANTO TEMPO A HABILIDADE FICARÁ EM USO BASEADA NOS PONTOS DE PERCEPCÃO
			if (skillTimer >= timeToStopSkill) {
				skillTimer = 0;
				skillActivate = !skillActivate;
//				print ("ACABOU O TEMPO DA SKILL");
				reloading = !reloading;
				
				
				var skills = GameObject.FindGameObjectWithTag ("Skills").GetComponent<Skill> ();
				skills.skillActivate = false;
				
				var PanelSurvivor = GameObject.FindGameObjectWithTag ("SkillSurvivor") as GameObject;
				PanelSurvivor.GetComponent<Animator> ().SetBool ("SurvivorActivate", false);
				
				
			}
			
			//LOGICA PARA RELOADING
			if (reloading) {
				var skills = GameObject.FindGameObjectWithTag ("Skills").GetComponent<Skill> ();
				reloadingTimer += Time.deltaTime;
				skills.amount.text = (reloadingTime - (int)reloadingTimer).ToString ();
			}
			
			if (reloadingTimer >= reloadingTime) {
				var skills = GameObject.FindGameObjectWithTag ("Skills").GetComponent<Skill> ();
				skills.amount.text = "";
				
//				print ("ESTA CARREGADA A SKILL");
				reloadingTimer = 0;
				reloading = !reloading;

			}
		} 

	}

	public void SkillClicked(){
		skillActivate = true;
//		print ("ATIVEI A SKILL");
	}

	public void ChangeWeapon(int weapon){

		//toca som de arma destravando
		this.weapon.GetComponent<Weapon> ().UnlockingWeapon (weapon);
			

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.selectedWeapon = weapon;
		if(weapon == 0){

			hudGame.bullets("∞");

		}
		else{

			hudGame.bullets("" + behave.bullets[weapon]);

		}

		hudGame.changeAmmoType(weapon);

		torsoAnimator.SetInteger("Weapon",behave.selectedWeapon);

	}

	//function called by bulletBox when dropped by 
	public void getBullet(int type,int minBullets, int maxBullets){
		
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		
		behave.incrementBullet( type,minBullets,maxBullets);
		ChangeWeapon(behave.selectedWeapon);
		
	}



	void Shoot(){



		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		
		fireRate = weapon.GetComponent<Weapon> ().weapons[behave.selectedWeapon].GetComponent<WeaponStats>().fireRate;
		
		isShooting = CrossPlatformInputManager.GetButton("Fire");

			if (isShooting) {

			var vision = knifeRange.GetComponent<knifeVision>();
			
			//if there arent any enemies near player
			if(vision.enemies.Count == 0){
				
				if (time > fireRate) {
					time = 0;

					
					//checks if pistol or have sufficient ammo;
					if(behave.bullets[behave.selectedWeapon] > 0 || behave.selectedWeapon == 0){



						weapon.GetComponent<Weapon> ().Shoot (shootDirection, baseDamage,behave.selectedWeapon);
						if(behave.selectedWeapon != 0){
							
							behave.bullets[behave.selectedWeapon]--;
							behave.ammoSpent++;
							behave.CheckAmmoAchievements();
							hudGame.bullets("" + behave.bullets[behave.selectedWeapon]);
							
							
						}
						
					}else{
						//se arma estiver sem municao, reproduz som de arma vazia

						weapon.GetComponent<Weapon> ().GunWithoutAmmo(behave.selectedWeapon);


					}
					torsoAnimator.SetBool("Shooting",true);
				}else
				{
					torsoAnimator.SetBool("Shooting",false);

				}

				

				
				
			}else{//if enemy is in rang for knife

				weapon.GetComponent<Weapon> ().PlayKnifeSound();

				foreach(GameObject enemy in vision.enemies){
					//facada
					enemy.GetComponent<Enemy>().TakeDamage(100);
					vision.enemies.Remove(enemy);
					behave.knifeKills++;
					behave.CheckKnifeAchievements();

					break;


				}

				torsoAnimator.SetTrigger("Knife");
				time = 0;
				
			}


		

			} else {

				torsoAnimator.SetBool("Shooting",false);
			}
		
	
	}


	//heal function heal parameter is amount to be healed
	public void Heal(int heal){

		//som do barry bebendo agua
		this.weapon.GetComponent<Weapon> ().PlayItemSound ();


		if (life + heal > maxLife) {
		
			life = maxLife;
		}
		else{
			life = life + heal;
		}

		hudGame.takeDamage();


	}

	//take damage function damage is the damage taken wich will be affected by armor
	public void TakeDamage(int damage){
		

		int trueDamage = damage - armor;
		
		if (life <= trueDamage && !dead) {
			
			life = 0;
			StartCoroutine(Die());

			hudGame.playerDead();
			
		} else {
			var skills = GameObject.FindGameObjectWithTag("Skills").GetComponent<Skill>();

			if(!skills.skillActivate){
				life = life - trueDamage;	
				hudGame.takeDamage();
			}


		}
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.life = life;
		
	}

	//receive xp function, the received experience is divided by players lvl
	//so it is harder to level up on easier enemies or easier quests
	public void IncrementXp(float receivedXp){


		experience = experience + (receivedXp / (lvl + 1));



		if (experience >= neededExperience) {

			experience = experience - neededExperience;
			neededExperience = neededExperience * 1.3f;
			LevelUp();
		}

		hudGame.incrementXp ();

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.experience = experience;
		behave.neededExperience = neededExperience;
		behave.totalExperience += receivedXp;


	}

	//screen representation to level up and hud representation
	public void LevelUp(){
		lvl++;
		var behaviour = GameObject.FindGameObjectWithTag("Behaviour");
		behaviour.GetComponent<GameBehavior> ().LeveledUp(lvl);
		//print("Level Up");
		hudGame.levelUp();





	}

	public void PauseGoToMap(AudioSource audio)
	{

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.GoToMapWithSound(audio);


	}

	public void PauseGoToScore(AudioSource audio)
	{
		
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.GoToScore(audio);
		
		
	}


	public void Win(){

		canvasDeath.SetActive (true);
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.pause = true;

		var panelDeath = GameObject.FindGameObjectWithTag ("PanelDeath") as GameObject;
		panelDeath.GetComponent<Image>().color = Color.white;
		panelDeath.GetComponent<Animator> ().SetTrigger("Death");


		var panelText = GameObject.FindGameObjectWithTag ("DeathText").GetComponent<Text>();
		panelText.text = "Mission Completed";


	}




	//death animation function
	IEnumerator Die(){

		canvasDeath.SetActive (true);

		dead = true;
		bothAnimator.SetBool ("dead", true);
		legAnimator.SetBool ("IsDead", true);
		torsoAnimator.SetBool ("IsDead", true);

//		var finalScore = GameObject.FindGameObjectWithTag("FinalScore");
//		var score = GameObject.FindGameObjectWithTag("Score");
//
//		finalScore.GetComponent<Text> ().text = "Score: " + score.GetComponent<Text> ().text;
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.totalDeaths++;
		behave.CheckDeathAchievements();

		var panelDeath = GameObject.FindGameObjectWithTag ("PanelDeath") as GameObject;
		panelDeath.GetComponent<Animator> ().SetTrigger("Death");

//		Transform retry = GameObject.FindWithTag("Retry").transform;
//		retry.GetComponent<Retry> ().activate();
		yield return new WaitForSeconds (3);



//		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
//		behave.GoToMap();





	}


	//move function  moves and animates function
	void Move(){

		float x = CrossPlatformInputManager.GetAxis ("Horizontal");
		float y = CrossPlatformInputManager.GetAxis ("Vertical");

		//horizontal move
		if ((x * x) > (y * y)) {

			//looking right
			if(x > 0){
				
				direction = 1;
				
			}


			//looking left
			if(x < 0){
				
				direction = 3;
				
			}

		} 
		//vertical move
		else {
			//looking up
			if(y > 0){

				direction = 0;

			}

			//looking down
			if(y < 0){
				
				direction = 2;
				
			}


			//standing still
			if(x == 0 && y == 0){
				direction = -1;
			}

		}


		if (direction != -1) {

			shootDirection = direction;
			legAnimator.SetBool ("IsRunning", true); 
			torsoAnimator.SetInteger ("Direction", direction);
			legAnimator.SetInteger ("Direction", direction);
			bothAnimator.SetInteger("direction",direction);


		} else {
		
 			legAnimator.SetBool ("IsRunning", false); 

		}

		//move up
		if (direction == 0) {

			transform.Translate(Vector3.up * (speed * Time.deltaTime));

		}
		//move right
		if (direction == 1) {

			transform.Translate(Vector3.right * (speed * Time.deltaTime));
			
		}
		//move down
		if (direction == 2) {

			transform.Translate(Vector3.down * (speed * Time.deltaTime));

		}
		//move up
		if (direction == 3) {

			transform.Translate(Vector3.left * (speed * Time.deltaTime));

		}


	}


}

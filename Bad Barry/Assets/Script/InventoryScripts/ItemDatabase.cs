﻿using UnityEngine;
using System.Collections;
using LitJson;
using System.Collections.Generic;
using System.IO;

public class ItemDatabase : MonoBehaviour {
	private List<Item> database = new List<Item>();
	private JsonData itemData;
	public static ItemDatabase Instance;

	void Start(){
		itemData = JsonMapper.ToObject (File.ReadAllText (Pathing.AppContentDataUri));;

		ConstructItemDatabase ();
	}

	public Item FetchItemByID(int id){
		for (int i = 0; i< database.Count; i++)
			if (database [i].ID == id) 
				return database [i];
			
		return null;

	}

	public int getItemDataLength(){
		return itemData.Count;
	}

	void ConstructItemDatabase(){
		for (int i = 0; i < itemData.Count; i++) {
			database.Add (new Item((int)itemData[i]["id"], itemData[i]["title"].ToString(), (int)itemData[i]["value"], (int)itemData[i]["stats"]["power"], (int)itemData[i]["stats"]["defense"], (int)itemData[i]["stats"]["vitality"], itemData[i]["description"].ToString(), itemData[i]["description2"].ToString(), (bool)itemData[i]["stackable"], (bool)itemData[i]["ability"],itemData[i]["slug"].ToString()));
		}
	}
}
public class Item{

	public int ID { get; set; }
	public string Title {get; set; }
	public int Value { get; set; }
	public int Power { get; set; }
	public int Defense { get; set; }
	public int Vitality { get; set; }
	public string Description { get; set; }
	public string Description2 { get; set; }
	public bool Stackable { get; set; }
	public bool Ability { get; set; }
	public string Slug { get; set; }
	public Sprite Sprite { get; set; }

	public Item(int id, string title, int value, int power, int defense, int vitality, string description, string description2, bool stackable, bool ability, string slug){
		this.ID = id;
		this.Title = title;
		this.Value = value;
		this.Power = power;
		this.Defense = defense;
		this.Vitality = vitality;
		this.Description = description;
		this.Description2 = description2;
		this.Stackable = stackable;
		this.Ability = ability;
		this.Slug = slug;
		this.Sprite = Resources.Load<Sprite> ("Sprites Inventory/Itens/" + slug);
	}

	//exemplo de possivel construtor para armas

//	public Item(int id, string title, int value, int power, int speed, string description){
//
//	}

	public Item(){
		this.ID = -1;
	}

}
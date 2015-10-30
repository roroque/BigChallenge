﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t20;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatformInput_Til.h"

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t21  : public MonoBehaviour_t2
{
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t20 * ___mapping_2;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t6 * ___m_SteerAxis_6;
};

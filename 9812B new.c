#pragma config(Motor,  port1,           RightBack,     tmotorVex269_HBridge, openLoop)
#pragma config(Motor,  port2,           RightFront,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           TopRightLift,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           BottomRightLift, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           BottomLeftLift, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           TopLeftLift,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           LeftFront,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          LeftBack,      tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks
  // running between Autonomous and Driver controlled modes. You will need to
  // manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
  // ..........................................................................
  // Insert user code here.
  // ..........................................................................

  // Remove this function call once you have "real" code.
  AutonomousCodePlaceholderForTesting();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{


  while (true)
  {
    motor[RightBack]  = vexRT[Ch2];
		motor[LeftBack]  = vexRT[Ch3];
		motor[RightFront] = vexRT[Ch2];
		motor[LeftFront] = vexRT[Ch3];

		if (vexRT[Btn6UXmtr2] == 1)
	{
		motor[TopLeftLift]=127;
		motor[TopRightLift]=127;
		motor[BottomLeftLift]=127;
		motor[BottomRightLift]=127;
	}
	  else if (vexRT[Btn6UXmtr2] == 0)
	{
		motor[TopLeftLift]=0;
		motor[TopRightLift]=0;
		motor[BottomLeftLift]=0;
		motor[BottomRightLift]=0;
	}
    if (vexRT[Btn6DXmtr2] == 1)
  {
    motor[TopLeftLift]=-127;
		motor[TopRightLift]=-127;
		motor[BottomLeftLift]=-127;
		motor[BottomRightLift]=-127;
  }
	  else if (vexRT[Btn6DXmtr2] == 0)
  {
		motor[TopLeftLift]=0;
		motor[TopRightLift]=0;
		motor[BottomLeftLift]=0;
		motor[BottomRightLift]=0;

  }


    UserControlCodePlaceholderForTesting();
  }
}

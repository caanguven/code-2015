// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "Diagnostics.h"
#include "Commands/AlignWithStep.h"
#include "Commands/BackupToAutonZone.h"
#include "Commands/DriveForward.h"
#include "Commands/GatherCans.h"
#include "Commands/LowerOneTote.h"
#include "Commands/RaiseOneTote.h"
#include "Commands/RaiseWings.h"
#include "Commands/RetractWings.h"
#include "Commands/RotateWings.h"
#include "Subsystems/compresoratoror.h"
#include "Commands/ShiftToHighGear.h"
#include "Commands/ShiftToLowGear.h"
#include "Commands/UnAPusH.h"
#include "Commands/APusH.h"
#include "Commands/ResetLift.h"
#include "Commands/PIDLift.h"
#include "Subsystems/Aligner.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/AutonomousCommand.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/EagleWings.h"
#include "OI.h"
#include "Subsystems/Lift.h"
#include "Subsystems/StepDetectorator.h"

class Robot : public IterativeRobot {
public:
	Command *autonomousCommand;
	Command *autonCalibration;
	Command* alignWithStep;
	Command* backupToAutonZone;
	Command* driveForward;
	Command* gatherCans;
	Command* lowerOneTote;
	Command* raiseOneTote;
	Command* raiseWings;
	Command* retractWings;
	Command* rotateWingsForward;
	Command* rotateWingsBackward;
	Command* raiseLift;
	Command* lowerLift;
	Command* stopLift;
	Command* push;
	Command* gearUp;
	Command* gearDown;
	Command* pull;
	Command* resetLift;
	Command* pidLift;

	static OI *oi;
	LiveWindow *lw;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static EagleWings* eagleWings;
	static Drivetrain* drivetrain;
	static Lift* lift;
	static StepDetectorator* stepDetectorator;
	static Compresoratoror* compresoratoror;
	static Aligner* aligner;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* driverStick;
	Joystick* techStick;
	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
	void startDiagnosticLogging();
	void logRow();
	void SetupRobot();
	const static int LEFT_TRIGGER = 2;
	const static int RIGHT_TRIGGER = 3;
	int gearToggle = 1;
	int pushToggle = 1;
	int camNumber = 1;

};
#endif

// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AlignWithStep.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/BackupToAutonZone.h"
#include "Commands/DriveForward.h"
#include "Commands/DriveTeleop.h"
#include "Commands/GatherCans.h"
#include "Commands/LiftTeleop.h"
#include "Commands/RetractWings.h"
#include "Commands/RotateWings.h"
#include "Commands/RunLift.h"
#include "Commands/WingsTeleop.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	joystick1 = new Joystick(0);
	
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("DriveForward", new DriveForward());

//	SmartDashboard::PutData("RotateWings", new RotateWings());

	SmartDashboard::PutData("AlignWithStep", new AlignWithStep());

	SmartDashboard::PutData("BackupToAutonZone", new BackupToAutonZone());

	SmartDashboard::PutData("GatherCans", new GatherCans());

	SmartDashboard::PutData("RetractWings", new RetractWings());

//	SmartDashboard::PutData("RunLift", new RunLift());

	SmartDashboard::PutData("DriveTeleop", new DriveTeleop());

	SmartDashboard::PutData("LiftTeleop", new LiftTeleop());

	SmartDashboard::PutData("WingsTeleop", new WingsTeleop());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getJoystick1() {
	return joystick1;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

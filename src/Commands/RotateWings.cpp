// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RotateWings.h"

RotateWings::RotateWings() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::eagleWings);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	durationTime = 1.45;
	this->direction = direction;
}

// Called just before this Command runs the first time
void RotateWings::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RotateWings::Execute() {
	Robot::eagleWings->leftServo->SetAngle(setAngle);
	Robot::eagleWings->rightServo->SetAngle(setAngle);
	hasSetAngle = true;
}

// Make this return true when this Command no longer needs to run execute()
bool RotateWings::IsFinished() {
	return hasSetAngle;
}

// Called once after isFinished returns true
void RotateWings::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RotateWings::Interrupted() {

}

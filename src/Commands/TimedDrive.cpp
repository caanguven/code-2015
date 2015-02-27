// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "timedDrive.h"

timedDrive::timedDrive(double time, double velocity) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	this->time = time;
	this->velocity = velocity;
}

// Called just before this Command runs the first time
void timedDrive::Initialize() {
	startTime = Timer::GetFPGATimestamp();
	Robot::drivetrain->ResetHeading();
}

// Called repeatedly when this Command is scheduled to run
void timedDrive::Execute() {
	Robot::drivetrain->DriveOnHeading(velocity);
}

// Make this return true when this Command no longer needs to run execute()
bool timedDrive::IsFinished() {
	return startTime + time <= Timer::GetFPGATimestamp();
}

// Called once after isFinished returns true
void timedDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void timedDrive::Interrupted() {

}
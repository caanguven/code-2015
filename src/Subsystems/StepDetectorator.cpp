#include "StepDetectorator.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

StepDetectorator::StepDetectorator() : Subsystem("StepDetectorator") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	sonar = RobotMap::stepDetectoratorsonar;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	accelerometer = new BuiltInAccelerometer();
	//TODO: have accelerometer values fetched in separate thread
}
bool StepDetectorator::IsAtStep() {
	return abs(accelerometer->GetX()) > .5;
}
void StepDetectorator::InitDefaultCommand() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

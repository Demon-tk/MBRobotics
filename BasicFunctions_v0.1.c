void claw (int speed){
	// claw closes if negative, opens in positive
  motor[clawMotor] = speed;
}

void drive (int left, int right){
	// drive forward if positive, backward in negative
	motor[driveLeft] = left;
	motor[driveRight] = right;
}

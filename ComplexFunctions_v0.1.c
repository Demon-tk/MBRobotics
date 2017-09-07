int stage = 0;


void chainBarControl(){

motor[chainBarLeft] = motor[chainBarRight] = vexRT[Ch2];

}

void liftControl(){

motor[liftLeft] = motor[liftRight] = vexRT[Ch2];

}

void clawControl(){

	if (vexRT[Btn5D]){ //open once potentiometer mounted
		claw(127);
	}
	else if (vexRT[Btn5U]){
		claw(-64);
	}
	else {
		claw(0);
	}

}

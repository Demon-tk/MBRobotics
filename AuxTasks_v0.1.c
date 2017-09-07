task driveControl()
{
	while (true){

  	drive((vexRT[Ch3] + vexRT[Ch4]),(vexRT[Ch3] - vexRT[Ch4]));

	}
}

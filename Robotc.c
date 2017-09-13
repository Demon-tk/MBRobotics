task main(){
  while(true) {
    if(vexRT[Btn7U] == true){
      clawMotor1 = 127;
      clawMotor2 = -127;
    }
    else if(vexRT[Btn7D] == true){
    clawMotor1 = -127;
    clawMotor2 = 127;
  }
}
}

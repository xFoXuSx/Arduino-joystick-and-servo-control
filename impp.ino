#include <Servo.h>
#define sw  2
#define rx A0
#define ry A1
const int buzzerpin = 9;
Servo servo2;
Servo servo1;


void setup() {
  pinMode(sw,INPUT_PULLUP);
  pinMode(buzzerpin, OUTPUT);
  servo1.attach(7);
  servo2.attach(8);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int joyx = analogRead(rx);
  int joyy = analogRead(ry);
  
  if(joyx<480||joyx>544){
    int servoAngle = map(joyx, 0, 1023, 0, 180);
    servo1.write(servoAngle);
  }
  if(joyy<480||joyy>544){
    int servoElevation = map (joyy, 0, 1023, 0, 180);
    servo2.write(servoElevation);

  }
  


  int buttonstate = digitalRead(sw);
  if(buttonstate == LOW){
    tone(buzzerpin, 1000);
  }else{
    noTone(buzzerpin);
  }

  delay(10);
  // put your main code here, to run repeatedly:

}

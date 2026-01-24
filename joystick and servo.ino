#include <Servo.h>
#define sw 9
#define rx A0
const int buzzerpin = 8;
Servo myServo;


 void setup() {
  Serial.begin(9600);
  myServo.attach(7);
  pinMode(buzzerpin, OUTPUT);
  pinMode(sw, INPUT_PULLUP);


 }
 void loop() {
  int joyValue = analogRead(rx);
  int buttonstate = digitalRead(sw);
  
  
  if(joyValue<480 || joyValue>544){
    int servoAngle = map(joyValue, 0, 1023, 0, 180); //joystickvalue //no voltage //max voltage of joystick //from angle 0 to angle 180 //all this inside the map fonction
    myServo.write(servoAngle);
  }

  if(buttonstate == LOW){
    tone(buzzerpin, 1000);
  }else{
    noTone(buzzerpin);
  }
  delay(10);

}
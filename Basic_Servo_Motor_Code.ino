#include <Servo.h> //importing servo library

Servo servo;
int servoPin = 9; 
int servoPosition = 90; //-180 to 180

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  servo.attach(servoPin);
  servo.write(servoPosition); 
 
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

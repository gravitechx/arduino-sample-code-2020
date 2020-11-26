int IRDigitalPin = 3;
int IRAnalogPin = A5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IRDigitalPin,INPUT);
  pinMode(IRAnalogPin, INPUT);

  //Using Digital Pin
  digitalRead(IRDigitalPin); //Returns 1 or 0 depending if anything is sensed
  analogRead(IRDigitalPin); //Returns the amount of infrared radiation sensed

  //Using Analog Pin
  digitalRead(IRAnalogPin); //Returns 1 or 0 depending if anything is sensed
  analogRead(IRAnalogPin); //Returns the amount of infrared radiation sensed. Note: not the same range of values as Digital Pin

}

void loop() {
  // put your main code here, to run repeatedly:
}

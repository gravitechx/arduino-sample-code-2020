
// #define gives name to constant value before program is compiled.
#define echoPin 2 // attach pin D2 Aruino to pin Echo of HC-SR04
#define trigPin 3 // attach pin d# Aruino to pin Trig of HC-SR04

// variables
long duration; //duration of sound from sensor
int distance; // variable for distance measurement

void setup() {
  pinMode(trigPin, OUTPUT); //sets trigPin as OUTPUT
  pinMode(echoPin, INPUT); //sets echoPin as INPUT.
  Serial.begin(9600); //serial communication beginning with 9600 of baudrate speed. I'm not sure what that means.
  Serial.println("Ulstrasonic Sensor HC-SR04 Test"); // This text is printed in the serial monitor. Press ctrl-shift-M to open it from the IDE, set it to 9600 at bottom.
  Serial.println("with Arduino Uno");
}

void loop() {
  //clears trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  //sets trigPin to HIGH (active) for 10 microseconds.
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //so far it looks like HIGH means to turn on, LOW means to turn off?

  //reads the echoPin, returns the sound wave travel time in microseconds.
  duration = pulseIn(echoPin, HIGH);

  //calculate the distance
  distance = duration * .034 / 2; //speed of sound wave divided by 2 (because wave goes to object, then returns, so distance to object is 1/2 of the total distance it traveled.

  //display distance on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}

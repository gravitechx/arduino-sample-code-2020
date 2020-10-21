#include <SoftwareSerial.h> //import serial library

int rxPin = 2;
int txPin = 3;
SoftwareSerial bluetoothModule(rxPin, txPin); //Constructor

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bluetoothModule.begin(9600);
 
  bluetoothModule.read();
  bluetoothModule.readString();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

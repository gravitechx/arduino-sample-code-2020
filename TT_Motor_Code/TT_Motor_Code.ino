
//********************
//THIS CODE IS SEMI-TESTED. I LITERALLY GOT IT FROM THIS VIDEO: https://www.youtube.com/watch?v=GPVC84D5ULw AND AM TRYING TO FIGURE IT OUT.
//WATCH THE VIDEO AND MAKE SURE EVERYTHING IS CONNECTED PROPERLY
//MY APOLOGIES, I DON'T REALLY KNOW WHAT I'M DOING
//-EDWIN.
//P.S. sorry for all the caps.
//********************

int in1 = 2;  //3 integers, for each pin on the L298N
int in2 = 4;  //These correspond from the inputs and whatnot on the L298N to the ports on the uno.
int enA = 3;

int in3 = 5;  //I don't know if this is meant for 2 motors or one. It appears that in the video, 
int in4 = 7;  //this was for 1 motor. so idk. Watch the video (the wiring and coding part) and see
int enB = 6;  //if it works. See if commenting out this part and the related lines of code below effects it.

void setup() {

  pinMode(enA, OUTPUT);   //Set all this stuff to output.
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);   
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  //direction of control pins?
  //High sets teh value to 5V (or 3.3V if on a 3.3V board), low sets to 0V.

  digitalWrite(in1, HIGH); //move forwards for .5 s, I think. That's what the video said. 
  digitalWrite(in2, LOW); //To be honest, I think it'll move for 1.5 seconds, because of the 1500 delay.
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100); //Maybe speed control?
  digitalWrite(enB, 100);
  delay(1500);  //wait 1.5 seconds.

  digitalWrite(in1, LOW); //stop for .5 seconds.
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  delay(500); //wait .5 seconds.

  digitalWrite(in1, LOW); //stop for .5 seconds.
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(500); //wait .5 seconds.

  digitalWrite(in1, LOW); //stop for .5 seconds.
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  delay(500); //wait .5 seconds.
}

void loop() {
  // put your main code here, to run repeatedly:

}

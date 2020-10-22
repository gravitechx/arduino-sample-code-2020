
//********************
//THIS CODE IS SEMI-TESTED. I LITERALLY GOT IT FROM THIS VIDEO: https://www.youtube.com/watch?v=GPVC84D5ULw AND AM TRYING TO FIGURE IT OUT.
//IT DOESN'T WORK SO FAR
//WATCH THE VIDEO AND MAKE SURE EVERYTHING IS CONNECTED PROPERLY
//MY APOLOGIES, I DON'T REALLY KNOW WHAT I'M DOING
//-EDWIN.
//P.S. sorry for all the caps.
//********************

int in1 = 2;  //3 integers, for each pin on the L298N
int in2 = 4;  //These correspond from the inputs and whatnot on the L298N to the ports on the uno.
int enA = 3;

void setup() {

  //This is supposed to print something out on the computer.
//  Serial.begin(9600);
//  Serial.println("Starting");
  
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);   //Set all this stuff to output.
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  //direction of control pins?
  digitalWrite(in1, HIGH); //move forwards for .5 s
  digitalWrite(in2, LOW);
  digitalWrite(enA, 100); //Speed control
  delay(1500);  //wait.
}

void loop() {
  // put your main code here, to run repeatedly:

}

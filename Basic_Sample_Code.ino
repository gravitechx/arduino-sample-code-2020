//Example Class
class Object { 
  //private variables/methods (no methods shown here)
  private: 
    int o;

  //public variables/methods (no methods shown here)
  public: 
    //Constructor
    Object() {
      Serial.println("Object Init");  
      o = 0;
    }

    //Constructor
    Object(int temp) {
      Serial.println("Object Init");
      o = temp;
    }

    //Getter Method
    int getO() {
      return o;
    }
};

void setup() {
  // put your setup code here, to run once:
 
  //Tells Arduino to exchange messages with the 
  //Serial Monitor at a data rate of 9600 bits per second
  //Serial Monitor can be found in the upper right corner 
  //of the Arduino IDE
  Serial.begin(9600); 

  Serial.println("Hello World");

  //Used for reading from the 
  Serial.available();
  Serial.read();
  Serial.readString();

  //Declaring and Instantiating Variables
  int x = 0;
  double y = 3.1415;
  boolean b = false;

  //Declaring and Instantiating 2 Objects of the type Object
  Object obj1;
  Object obj2(2);

  Serial.println(obj1.getO());
  Serial.println(obj2.getO());

  //for loop
  for (int i = 0; i < 10; i++) {
    Serial.println(i);
  }

  //if statement
  if (b) {
    Serial.println("true");
  } else if (x == y) {
    Serial.println("false");
  } else if (x > y) {
    Serial.println("x");
  } else if (b || true) {
    Serial.println("test");
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:  
}

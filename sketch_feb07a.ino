int ledPin = 13;   // LED connected to digital pin 13
int inPin = 3;     // pushbutton connected to digital pin 7
int val = 0;       // variable to store the read value
int motorpin = 4;  //digital 4

void setup()
{
  pinMode(ledPin, OUTPUT);      // sets the digital pin 13 as output
  pinMode(inPin, INPUT);        // sets the digital pin 7 as input
    Serial.begin(9600);
    pinMode(motorpin, OUTPUT);  //output bitches
}

void loop()
{
  val = digitalRead(inPin);     // read the input pin
  digitalWrite(ledPin, val);    // sets the LED to the button's value
  Serial.println(val); //print it
 digitalWrite(motorpin, LOW);
 
  
  if (val == 1){
    digitalWrite(motorpin, HIGH); //turn motor high
    delay(5000); 
  }
  
}


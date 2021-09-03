//Always remember to configure the Baud rate, correct COM port and correct Arduino board prior build and upload the project

int pushButton = 10;
int blue_LED = 5;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(blue_LED, OUTPUT);
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // Hola mundo will be printed acording to baud rate and delay defined
  digitalWrite(blue_LED, HIGH);
  delay(100);    
  digitalWrite(blue_LED, LOW);
  delay(100);
  digitalWrite(blue_LED, HIGH);
  delay(100);    
  digitalWrite(blue_LED, LOW);
  delay(100);

  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.print("The status is: ");
  Serial.println(buttonState);

  /*while(1)
  {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println("The pushButton is: " + buttonState);
  delay(100);        // delay in between reads for stability
  }*/
}

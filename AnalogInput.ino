int xPin = A0;    // select the input pin for the potentiometer
int yPin = A1;
int button = 2;  // variable to store the value coming from the sensor
int xVal = 0;
int yVal = 0;
int buttonVal = 0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  buttonVal = digitalRead(button);
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);

  Serial.print(buttonVal);
  Serial.print("   ");
  Serial.print(xVal);
  Serial.print("   ");
  Serial.println(yVal);
  
}

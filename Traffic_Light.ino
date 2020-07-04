int r = 11;
int y = 12;
int g = 13;
int rm = 10;
int gm = 9;
 
void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(rm, OUTPUT);
  pinMode(gm, OUTPUT);
}

void loop() {
  digitalWrite(gm, 0);
  digitalWrite(y, 0);
  digitalWrite(r, 0);
  digitalWrite(g, 1);
  digitalWrite(rm, 1);   
  delay(3000);                       
  digitalWrite(g, 0);      
  digitalWrite(y, 1);   
  delay(1000);                       
  digitalWrite(y, 0);    
  digitalWrite(r, 1);
  digitalWrite(rm, 0);
  digitalWrite(gm, 1);
  delay(2000);                       
  digitalWrite(gm, 0);
  digitalWrite(rm, 1);
  delay(500); 
}

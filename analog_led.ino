int led=11;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  for(int i=0; i<=255; i=i+1){
    analogWrite(led, i);
    delay(20);
  }
  for(int i=255; i>=0; i--){
    analogWrite(led,i);
    delay(20);
  }

}

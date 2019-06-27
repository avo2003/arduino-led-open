int a = 2;
int b=7;
int c=12;
void setup() {
 
pinMode (a,OUTPUT);
pinMode (b,OUTPUT);
pinMode (c,OUTPUT);
}

void loop() {
  digitalWrite(a,HIGH);
  delay(50);
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
  delay(50);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
  delay(50);
    digitalWrite(c,LOW);
}

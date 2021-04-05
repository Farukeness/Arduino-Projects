#define ldr A0 
#define led 7


void setup()
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int deger=analogRead(ldr);
  Serial.println(deger);
  if (deger<25){
    digitalWrite(led,HIGH);
  }
  else{digitalWrite(led,LOW);}
}

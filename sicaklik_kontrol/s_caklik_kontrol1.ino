#define buzzer 9
#define led 6
#define tmp A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int deger= analogRead(A0);
  int iki=map(deger, 20,358, -40,125);
  Serial.println(iki);
  if(iki >= 30){
    digitalWrite(6,HIGH);
    tone(buzzer, 1000);
    delay(1000);
    digitalWrite(6,LOW);
    noTone(buzzer);
    delay(1000);
  }
  else{

    digitalWrite(6,LOW);
    digitalWrite(9,LOW);
    
    
  }
}
#define led 6
#define pot A2


void setup()
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  

}

void loop(
{
  int deger=analogRead(pot);
  int guc=deger/4;
  Serial.println(deger);
  analogWrite(led,guc);
   
}
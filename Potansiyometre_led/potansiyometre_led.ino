/* Define komutları pinlerimize yerleştirdiğimiz bileşenlere isim 
vererek tanımlamamızı sağlar. Bu şekilde kodlarımızı yazarken sürekli
pin numaralarına bakmamız gerekmez.*/
#define led 6
#define pot A2


void setup()
{
  /*pinMode komutu kartımızdan çıkışmı yoksa girişmi olucak onu 
  tanımlamamızı sağlar*/
  pinMode(led,OUTPUT);
  /*Serial.begin bize bir haberleşme kanalı sunar 9600 değeri ise 
  bir aralığı belirtir.Özellikle çıktılarımızı seri monitörden 
  almamızı sağlar*/
  Serial.begin(9600);
  

}

void loop()
{
  /*analogRead komutu 0/1023 arasında gelen değeri okumamazı sağlar.*/
  int deger=analogRead(pot);
  int guc=deger/4;
  Serial.println(deger);
  analogWrite(led,guc);
   
}
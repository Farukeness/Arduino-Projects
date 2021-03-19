/*Define komutuyla pin numaralarına karşılık gelen bileşenlerimizi 
tanımladık*/

#define led 7
#define buton 8


/* buton deger adlı değişken oluşturuldu bu loop kısmında kullanmamız
gereken bir değişken*/

int butondeger=1;
void setup()
{
  /*bileşenlerimiz bize sinyalmi yolluyor yoksa bizmi onlara bilgi
  gönderiyoruz bunu tanımlıyoruz.*/
  pinMode(led,OUTPUT);
  pinMode(buton,INPUT);

}

void loop()
{
  /*digitalRead komutuyla butondan aldığımız bilgiyi önceden 
  oluşturduğumuz değişkene aktarıyoruz daha sonra bu değişkende ki
  veriye göre if else oluşturup ledimizi yakıyoruz.*/
  butondeger=digitalRead(buton);
  if (butondeger==1){
    digitalWrite(7,HIGH);
    
  }
  else{
    
    digitalWrite(led,LOW);
  }
    
}
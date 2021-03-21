/* Rgb ledimizde üç renk bulunmaktadır ve onları normal led tanımlar
gibi tanımlıyoruz ayrıca potansiyometremizide tanımlıyoruz.
Bizim kullandığımız kartlarımızda iki adet 5v girişi olduğu için 
rgb'ye gitmesi gereken 5v için ayrı hat çekmemiz gerekmiyor.*/
#define mavi 10
#define yesil 9
#define kirmizi 11
#define pot A0

void setup() {
  
  pinMode(kirmizi,OUTPUT);
  pinMode(mavi,OUTPUT);
  pinMode(yesil,OUTPUT);
  Serial.begin(9600);
  
  

}

void loop() {
  /*Bu kısımda yaptığımız işlem sadece pot değerini deger 
  değişkenine aktarmak ve  farklı değerlere göre farklı ledleri
  yakmaktır.*/
  int deger = analogRead(pot);
  Serial.println(deger);
  if (deger<=341){
    digitalWrite(kirmizi,LOW);
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,HIGH);
  }
  else if (deger<=682){
    digitalWrite(kirmizi,HIGH);
    digitalWrite(mavi,HIGH);
    digitalWrite(yesil,LOW);
    
  }
  else {
    digitalWrite(kirmizi,HIGH);
    digitalWrite(mavi,LOW);
    digitalWrite(yesil,HIGH);
  }

}
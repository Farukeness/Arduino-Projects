/* ledler isminde bir liste oluşturuyoruz ve aslında 
ledleri bağladığımız pin numaralarınıda belirlemiş oluyoruz*/
int ledler[] = {2,3,4,5,6,7};

void setup() {
  /*ledler listemizdeki sayıları for döngüsü sayesinde hepsini 
  OUTPUT yani çıkış pini olarak ayarlıyoruz*/

  for(int i=0; i<6; i++){
    
  pinMode(ledler[i], OUTPUT);
  
  }

}

void loop() {
  /* Bir for döngüsü ekleyerek her ledi sırasıyla 1 saniye yakıp7
  söndürüyoruz*/

  for(int i=0; i<6; i++){
    digitalWrite(ledler[i], HIGH);
    delay(80);
    digitalWrite(ledler[i], LOW);
  }
/* yukarıdaki döngünün tam tersi sırasından başlatarak görüntüyü
akıcı hale getiriyoruz ayrıca j=5 diyerek ilk ve son ledin iki kez 
değil bir defa yanmasını sağlıyoruz. Döngümüz 6 defa çalışsaydı
ilk ve son sıra iki kez yanıcaktı*/
  for(int j=5; j>-1; j--){
    digitalWrite(ledler[j], HIGH);
    delay(80);
    digitalWrite(ledler[j], LOW);
  }

}

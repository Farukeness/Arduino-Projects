#define trigger_pin 7
#define echo_pin 6 

int sure;
int mesafe;

void setup() {
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);

  Serial.begin(9600);
}

void loop() {
  //trigger pine komut göndererek ses dalgası gönderiyoruz  
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin, LOW);
  //pulseIn komutu echo_pine gelen HIGH komutundan tekrar LOW olana kadar olan süreyi bize veriyor bizde bunu sure değişkenimize aktarıyoruz
  sure = pulseIn(echo_pin, HIGH);
  // pulseIn komutuyla elde ettiğimiz ses dalgası hızını basit bir hesapla mesafeye çeviriyoruz.
  mesafe = (sure/2) / 29.1;

  Serial.print("Mesafe = ");
  Serial.println(mesafe);
  delay(100);

}

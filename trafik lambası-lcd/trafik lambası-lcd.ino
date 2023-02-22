#include <LiquidCrystal.h>



LiquidCrystal lcd (12,11, 5, 4, 3, 2);
void setup() 
{
 lcd.begin(16,2); 
 pinMode(10,OUTPUT);//Kırmızı
 pinMode(9,OUTPUT);//Sarı
 pinMode(8,OUTPUT);//Yeşil
}

void loop() 
{
  digitalWrite(10,HIGH);
  for(int i = 10; i>=0; i--){
    lcd.print(i);
    lcd.print(" Saniye !");
    lcd.setCursor(2, 1);
    lcd.print("KIRMIZI DUR!");
    delay(1000);
    lcd.clear();
  }
  digitalWrite(9,HIGH);
   for(int i = 3; i>=0; i--){
    lcd.print(i);
    lcd.print(" Saniye !");
    lcd.setCursor(2, 1);
    lcd.print("SARI HAZIR OL!");
    delay(1000);
    lcd.clear();
  }
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
 for(int i = 10; i>=5; i--){
    lcd.print(i);
    lcd.print(" Saniye !");
    lcd.setCursor(2, 1);
    lcd.print("YESIL GEC!");
    delay(1000);
    lcd.clear();
  }
  for (int i =4 ; i>=0;i--){
    lcd.print(i);
    lcd.print(" Saniye !");
    lcd.setCursor(2, 1);
    lcd.print("YESIL GEC!");
    digitalWrite(8,LOW);
    delay(500);
    digitalWrite(8,HIGH);
    delay(500);
    lcd.clear();

  }
  digitalWrite(8,LOW);

  

}

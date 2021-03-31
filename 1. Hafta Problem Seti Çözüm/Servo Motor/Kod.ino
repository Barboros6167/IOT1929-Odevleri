#include <Servo.h>

Servo servomotor;
  
void setup()
{
servomotor.attach(5);
}

void loop()
{
  for(int baslangic=0; baslangic<180; baslangic+=15)
  {
  servomotor.write(baslangic);
  delay(1000);
  }
  
  for(int baslangic2=180; baslangic2>0; baslangic2-=30)
  {
  servomotor.write(baslangic2);
  delay(1000);
  } 
}
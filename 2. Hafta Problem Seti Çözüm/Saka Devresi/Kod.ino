#define BLYNK_PRINT Serial 
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>

char auth[] = "token";
char ssid[] = "ag";
char pass[] = "sifre";

#define yesil D4
#define kirmizi D5 
#define mavi D6
int buton;

void setup()
{
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
pinMode(yesil, OUTPUT);
pinMode(kirmizi, OUTPUT);
pinMode(mavi, OUTPUT);
}

void loop()
{ 
Blynk.run();                         
}

BLYNK_WRITE(V3)
{             
buton= param.asInt();
if(buton==1)
{
digitalWrite(yesil , HIGH);
delay(5000);
digitalWrite(yesil , LOW);

digitalWrite(kirmizi , HIGH);
delay(5000);
digitalWrite(kirmizi , LOW);
      
digitalWrite(mavi , HIGH);
delay(5000);
digitalWrite(mavi , LOW);
}
else
{
digitalWrite(yesil , LOW);
digitalWrite(kirmizi , LOW);
digitalWrite(mavi , LOW);
}
}

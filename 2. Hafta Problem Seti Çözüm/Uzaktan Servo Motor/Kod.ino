#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = "token";
char ssid[] = "ag";
char pass[] = "sifre";

Servo servo;

void setup()
{
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
servo.attach(D5);
}

BLYNK_WRITE(V3)
{
servo.write(param.asInt());
}

void loop()
{
Blynk.run();
}

#include <Joystick.h>
#include <Servo.h>

Servo servoX;
Servo servoY;

Joystick_ Joystick;

const bool initAutoSendState=true;

void setup()
{
Joystick.begin();
servoX.attach(6);
servoY.attach(5);
Serial.begin(9600);
}

void loop()
{
int X = analogRead(A0);
X = map(X, 0,1023, 0,180);
Joystick.setXAxis(X);
servoX.write(X);
  
int Y = analogRead(A1);
Y = map(Y, 0,1023, 0,90);
Joystick.setYAxis(Y);
servoY.write(Y);
   
Serial.print("X Motor Aci Degeri:");
Serial.println(X);
Serial.print("Y Motor Aci Degeri:");
Serial.println(Y);
delay(1000);
  
  
}
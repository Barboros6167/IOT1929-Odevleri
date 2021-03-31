void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
     int okuma=analogRead(A0);
    
     int orantilipot = map(okuma, 0, 1023 , 0, 255);
     
     
     analogWrite(3,orantilipot);
  
  
  	 int motororantisi = map(orantilipot, 0, 255, 0, 5555 );
  
  if(motororantisi==5555)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
  digitalWrite(2,LOW);
  }
  
  	  
     Serial.println("******************************************");
  	 Serial.println("Pot Degeri");
     Serial.println(okuma);
     
     Serial.println("__________________________________________");
     Serial.println("Pwm Degeri");
     Serial.println(orantilipot);
     
     Serial.println("__________________________________________");   
     Serial.println("Motor Rpm Degeri");
     Serial.println(motororantisi);
     Serial.println("******************************************");
     Serial.println("  ");
     delay(1000);
  
}
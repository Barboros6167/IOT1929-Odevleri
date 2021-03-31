#define Nem A0
#define Sicaklik A1

void setup()
{
 	pinMode (Nem , INPUT) ;
    pinMode (Sicaklik , INPUT );
  	Serial.begin( 9600 ) ;
}

void loop()
{

int Sicaklik2 = analogRead(Sicaklik) ;
int Sicaklik_Deger = map(Sicaklik2, 20, 358, -40, 125) ;
    
int Kelvin = (Sicaklik_Deger + 273);
int Fahrenheit = ((1.8*Sicaklik_Deger)+273);
  
int Nem_Miktari = analogRead(Nem);
int Nem = map( Nem_Miktari , 0 , 1023 , 0 , 150);
 
Serial.println("******************************************");
Serial.println("Celsius");
Serial.println(Sicaklik_Deger);
     
Serial.println("__________________________________________");
Serial.println("Kelvin");
Serial.println(Kelvin);
     
Serial.println("__________________________________________");   
Serial.println("Fahrenheit");
Serial.println(Fahrenheit);
  
Serial.println("__________________________________________");   
Serial.println("Nem");
Serial.println(Nem);
Serial.println("******************************************");
Serial.println("  ");
delay(1500);
  
}

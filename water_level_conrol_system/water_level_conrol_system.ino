#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <DHT.h>;

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define DHTPIN 7     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE);
int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value


void setup() {
  dht.begin();
  // Initialize lcd screen
  lcd.init();
  // Turn on the backlight
  lcd.backlight();
}
void humidity()
{
    delay(2000);
    //Read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    
    //Print temp and humidity values to serial monitor
    lcd.setCursor(0,0);
    lcd.print("Humidity :-");
    lcd.setCursor(12,0);
    lcd.print(hum);

    
    lcd.setCursor(0,1);
    lcd.print(" Temp:- ");
    lcd.setCursor(10,1);
    lcd.print(temp);
    
    delay(3000); //Delay 3 sec.
}


void loop() {
  humidity();
}

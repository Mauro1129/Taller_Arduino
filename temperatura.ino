// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


const int SensorPin= A1;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Temperatura!");
}

void loop(){
lcd.clear();
int value = analogRead(SensorPin);
float millivolts = (value / 1023.0)* 5000;
float celcius = millivolts / 10;
lcd.print(celcius);
lcd.println(" c");
delay(1000);
}

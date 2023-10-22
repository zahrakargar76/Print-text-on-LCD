// include the library code:
#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);    // initialize LCD and set up the number of columns and rows:
  lcd.print("ZAHRA");  // print a message to the lcd:
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);
}

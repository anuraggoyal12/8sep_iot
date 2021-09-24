#include<LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int h, m, s;
void setup() {
  lcd.begin(16, 2);
  int( h = 13, m = 59, s = 50);
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(2, 0);
  lcd.print("Digital Clock");
  lcd.setCursor(2, 1);
  lcd.print(":");
  lcd.setCursor(5, 1);
  lcd.print(":");
  for (h; h <= 23; h++)
  {
    lcd.setCursor(0, 1);
    lcd.print("0");
    if (h < 10) {
      lcd.setCursor(1, 1);
      lcd.print(h);
    } else {
      lcd.setCursor(0, 1);
      lcd.print(h);
    }

    for (m; m <= 59; m++)
    {
      lcd.setCursor(3, 1);
      lcd.print("0");
      if (m < 10) {
        lcd.setCursor(4, 1);
        lcd.print(m);
      } else {
        lcd.setCursor(3, 1);
        lcd.print(m);
      }
      for (s; s <= 59; s++)
      {
        lcd.setCursor(6, 1);
        lcd.print("0");
        if (s < 10) {
          lcd.setCursor(7, 1);
          lcd.print(s);
        } else {
          lcd.setCursor(6, 1);
          lcd.print(s);
        }
        delay(996);
      }
      s = 0;
    }
    m = 0;
  }
  h = 0;


  // put your main code here, to run repeatedly:

}

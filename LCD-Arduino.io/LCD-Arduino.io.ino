#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

struct Screen {
  const char* line1;
  const char* line2;
  unsigned long duration;
};

Screen screens[] = {
  {"WAVIN' FLAG", "K'NAAN"},
  {"When I get", "older"},
  {"I will be", "stronger"},
  {"They'll call", "me freedom"},
  {"Just like a", "wavin' flag"},
  {"And then it", "goes back"},
  {"And then it", "goes back"}
};

const int screenCount =
  sizeof(screens) / sizeof(screens[0]);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  for (int i = 0; i < screenCount; i++) {
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print(screens[i].line1);

    lcd.setCursor(0, 1);
    lcd.print(screens[i].line2);

    delay(1200);  // 1.2 seconds per screen
  }
}
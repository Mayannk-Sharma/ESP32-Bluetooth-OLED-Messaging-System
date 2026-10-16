#include "BluetoothSerial.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

BluetoothSerial SerialBT;

Adafruit_SH1106G display(128, 64, &Wire, -1);

String message = "";

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_OLED");

  Wire.begin(21, 22);

  display.begin(0x3C, true);
  display.clearDisplay();
  display.setTextColor(SH110X_WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Bluetooth Ready");
  display.println("ESP32_OLED");
  display.display();
}

void loop() {
  while (SerialBT.available()) {
    char c = SerialBT.read();

    if (c == '\n' || c == '\r') {
      if (message.length() > 0) {
        display.clearDisplay();
        display.setCursor(0, 0);
        display.setTextSize(1);
        display.println("Received:");
        display.println(message);
        display.display();

        Serial.println(message);
        message = "";
      }
    } else {
      message += c;
    }
  }
}

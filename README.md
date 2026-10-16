# ESP32 Bluetooth OLED Messaging System

A beginner-friendly embedded systems project that uses an ESP32, Bluetooth Serial communication, and an SH1106 OLED display to receive and display text messages wirelessly.

## 📌 About the Project

The ESP32 acts as a Bluetooth receiver. When a user sends a text message from a Bluetooth-connected device, the ESP32 receives the message and displays it on a 128×64 OLED screen.

This project demonstrates the basics of wireless communication, microcontroller programming, and OLED interfacing using the Arduino framework.

## ✨ Features

- Wireless text reception using Bluetooth Classic
- Real-time display of received messages on an OLED screen
- Serial Monitor output for debugging
- Simple and beginner-friendly implementation
- Uses I²C communication to interface with the OLED display

## 🛠️ Hardware Requirements

- ESP32 development board with Bluetooth Classic support
- SH1106 128×64 OLED display
- Jumper wires
- USB cable
- Smartphone or computer with Bluetooth Classic serial-terminal support

## 💻 Software and Libraries

- Arduino IDE
- ESP32 board package for Arduino
- `BluetoothSerial.h` — Bluetooth Serial support provided by the ESP32 Arduino core
- `Wire.h` — I²C communication
- `Adafruit_GFX.h` — Graphics library
- `Adafruit_SH110X.h` — SH110X OLED display support

## 🔌 Circuit Connections

| OLED Display | ESP32 |
|---|---|
| SDA | GPIO 21 |
| SCL | GPIO 22 |
| GND | GND |
| VCC | Compatible power supply pin, according to the display module |

**Note:** The code uses GPIO 21 for SDA and GPIO 22 for SCL. Check your specific display module's voltage requirements before connecting it.

## 🚀 Getting Started

1. Install the Arduino IDE.
2. Install the ESP32 board package.
3. Install the Adafruit GFX and Adafruit SH110X libraries.
4. Connect the OLED display to the ESP32 using the wiring table.
5. Open the `.ino` source file from this repository in Arduino IDE.
6. Select your ESP32 board and the correct serial port.
7. Upload the program to the board.
8. Pair your phone with the Bluetooth device named `ESP32_OLED`.
9. Connect using a Bluetooth Classic serial terminal application.
10. Send a text message followed by a newline or carriage return.

The received message should appear on the OLED display and in the Arduino Serial Monitor.

## ⚙️ How It Works

1. The ESP32 initializes Bluetooth Serial with the device name `ESP32_OLED`.
2. The OLED displays a startup message.
3. The ESP32 listens for incoming Bluetooth characters.
4. Characters are collected until a newline or carriage return is received.
5. The complete message is displayed on the OLED and printed to the Serial Monitor.

## 📚 What I Learned

- ESP32 programming using the Arduino framework
- Bluetooth Classic Serial communication
- I²C communication with an OLED display
- Using external libraries in C++
- Basic debugging using the Serial Monitor

## 🔮 Future Improvements

- Automatic text wrapping for long messages
- Scrolling text for messages longer than the screen
- Adjustable text size
- Message history
- A dedicated mobile application for sending messages

## 👨‍💻 Author

Mayank Sharma

## 📄 License

This project is licensed under the MIT License. See the `LICENSE` file for details.

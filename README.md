Arduino LCD Lyrics Display 🎵

A simple Arduino-based project that displays short song lyrics on a 16×2 LCD using an Arduino Uno.

This project uses the LiquidCrystal library to display text across two lines, with adjustable delays to control the speed of each screen transition. The display cycles through the text continuously, creating a small music-inspired electronics project.

🛠️ Components Used

- Arduino Uno
- 16×2 LCD display
- 10K potentiometer for contrast adjustment
- Breadboard and jumper wires
- USB cable for programming and power

## 🔌 Circuit Diagram & Pin Connections

The 16×2 LCD is interfaced with the Arduino Uno using
4-bit communication mode.

### Pin Mapping

| LCD Pin | Function | Arduino Connection |
|---------|----------|-------------------|
| 1 | VSS | GND |
| 2 | VDD | 5V |
| 3 | VO | Potentiometer middle pin |
| 4 | RS | Digital Pin 7 |
| 5 | RW | GND |
| 6 | Enable (E) | Digital Pin 8 |
| 11 | Data (D4) | Digital Pin 9 |
| 12 | Data (D5) | Digital Pin 10 |
| 13 | Data (D6) | Digital Pin 11 |
| 14 | Data (D7) | Digital Pin 12 |
| 15 | Backlight (+) | 5V, with suitable current limiting |
| 16 | Backlight (-) | GND |

### Additional Components
- **10K potentiometer:** Adjusts the LCD contrast.
- **Breadboard and jumper wires:** Connect the components.
- **USB cable:** Powers and programs the Arduino Uno.

Technologies 

- Arduino C++
- Arduino IDE
- LiquidCrystal library

🚀 What I Learned

- Interfacing a 16×2 LCD with Arduino
- Using digital pins to control an LCD
- Structuring text using C++ structures and arrays
- Controlling display timing with delays

This project is part of my hands-on learning journey in Electronics and Communication Engineering (ECE), combining programming with hardware interfacing.


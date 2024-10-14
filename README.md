# KABANDHA - The Pet Demon Robot

**KABANDHA** is a microcontroller-powered pet demon robot inspired by the mythical figure from the *Ramayana*. It is designed to be interactive, featuring moveable arms, Bluetooth connectivity, and customizable behavior. This project combines fun mythology with practical robotics, using **two Arduino Nano microcontrollers** to control motion, communication, and display.

## Features
- **Moveable arms** controlled by servo motors
- **Bluetooth connectivity** using the HC-05 module
- **OLED Display** for status updates or visual effects
- **Four-wheel drive** powered by N20 motors for mobility

## Components

### Electronics:
- 2 x Arduino Nano
- DRV8833 Motor Driver
- HC-05 Bluetooth Module
- OLED Display
- 7.4V LiPo Battery
- 4 x N20 Motors
- N20 Motor Wheels
- Servo Motor
- Male & Female Header Pins
- Breadboard
- Connecting Wires

### Hardware:
- 5mm Sunboard (for chassis)
- Thick Sheet (for canopy)
- Tiny screws

### Tools:
- Soldering Iron and Solder Paste
- Hot Glue Gun
- Super Glue
- Cutting Hobby Knife
- Screwdriver
- Wrench Set
- Wire Stripper & Cutter
- Computer with Arduino IDE Installed

## Circuit Diagram

Below is the wiring diagram for the project. It shows how the components are connected to the Arduino Nano, the motor driver (DRV8833), and the Bluetooth module (HC-05):

![Circuit Diagram](CIRCUIT.png)

### Pin Connections:

#### Arduino Nano - DRV8833 Motor Driver:
- D10 → IN4
- D9  → IN3
- D5  → IN1
- D6  → IN2
- OUT1, OUT2 → Motor 1 & 2
- OUT3, OUT4 → Motor 3 & 4
- GND → GND
- VCC → VCC

#### Arduino Nano - HC-05 Bluetooth Module:
- RX → TX
- TX → RX
- GND → GND
- VCC → VCC

#### Arduino Nano - Servo Motor:
- D12 → Servo Motor Signal Pin
- VCC, GND → Servo Power

### Additional Details:
- The **OLED Display** is connected using the standard I2C pins on the Arduino Nano (A4 → SDA, A5 → SCL).
- The **7.4V LiPo battery** is used to power the entire system via the Arduino Nano's VIN pin.

## Getting Started

### Prerequisites

1. **Install Arduino IDE**: You can download the Arduino IDE from [here](https://www.arduino.cc/en/software).
2. **Install the Necessary Libraries**:
   - `Servo.h` for controlling the servo motor.
   - `Wire.h` for I2C communication (OLED Display).
   - `Adafruit_SSD1306.h` for controlling the OLED Display.
   
   You can install these libraries from the Arduino Library Manager.

### Cloning the Repository
To begin working on the project, first, clone this repository to your local machine:

```bash
git clone https://github.com/aphla001/KABANDHA.GIT
cd KABANDHA
```

### Uploading the Code

1. **Connect your Arduino Nano** to your computer via USB.
2. **Open the Arduino IDE** and navigate to `File > Open`, then select the `.ino` file from the cloned repository.
3. **Select your Board**: From `Tools > Board`, choose **Arduino Nano**.
4. **Select the Processor**: Choose **ATmega328P (Old Bootloader)** from `Tools > Processor`.
5. **Select the Port**: Go to `Tools > Port` and select the port where your Arduino Nano is connected.
6. **Upload the Code**: Click the Upload button in the Arduino IDE to upload the sketch.

### Troubleshooting Tips
- Make sure the correct board and port are selected in the Arduino IDE.
- Ensure that all the connections are correct as per the circuit diagram.
- Use a fresh LiPo battery for stable power supply.
- Check your wiring for loose connections if the robot does not move as expected.

## Customization

Once the robot is assembled and working, you can modify the code to change its behavior, control how the arm moves, or add different display outputs to the OLED. Additionally, you can:
- Modify the Bluetooth commands to control *KABANDHA* remotely.
- Add sensors (ultrasonic, light, etc.) for more interactivity.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Credits

Inspired by **The Yantracharya**, this project brings together the world of mythology and microcontrollers in a fun and engaging way.
```

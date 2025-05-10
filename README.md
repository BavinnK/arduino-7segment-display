# Arduino 7-Segment Display Controller (Tinkercad Project)

This project demonstrates how to control a 7-segment display using an Arduino UNO. The circuit is designed and simulated in Autodesk Tinkercad. It typically cycles through displaying digits 0-9.

![7SEg](https://github.com/user-attachments/assets/775a4e07-421a-4fcb-8c29-b2e507b5ef17)


## Table of Contents
1.  [Hardware Components](#hardware-components)
2.  [Circuit Wiring](#circuit-wiring)
3.  [Software (Arduino Code)](#software-arduino-code)
4.  [How to Simulate (Tinkercad)](#how-to-simulate-tinkercad)
5.  [How to Use with Physical Arduino](#how-to-use-with-physical-arduino)
6.  [Customization](#customization)

## Hardware Components
*   1 x Arduino UNO
*   1 x 7-Segment Display (Common Cathode)
*   7 x Resistors (e.g., 220Ω or 330Ω - current limiting for each segment. Tinkercad default is often 1kΩ which is also fine for simulation)
*   Jumper Wires

## Circuit Wiring

The 7-segment display is connected to the Arduino digital pins as follows. Each segment pin is connected in series with a current-limiting resistor.

![Screenshot 2025-05-10 230256](https://github.com/user-attachments/assets/103c14b0-bd95-4236-9635-01b718c879d4)


*Note: The Decimal Point (DP) pin is not used in this setup.*

## Software (Arduino Code)

The Arduino sketch controls the 7-segment display. The code defines the pin connections and includes functions to display digits 0-9 by turning the appropriate segments ON or OFF. For a common cathode display, setting a segment pin to `HIGH` turns the segment ON.

The Arduino code (`.ino` file) for this project can be found in the repository. It typically includes:
*   Pin definitions for each segment of the display.
*   An array or lookup table defining the segment patterns for digits 0-9.
*   A `setup()` function to initialize the pin modes.
*   A `loop()` function to cycle through displaying numbers or implement other logic.
*   Helper functions to display a specific digit or clear the display.

Please refer to the `.ino` file in this repository for the complete source code.

## How to Simulate (Tinkercad)

1.  **Open in Tinkercad**:
    *   If you have the project link, open it directly. (e.g., `https://www.tinkercad.com/things/your-project-id`)
    *   *You should add your Tinkercad project link here!*
2.  **Access Code**: Click on the "Code" button in the Tinkercad interface. The code used in the simulation will be visible here.
3.  **Start Simulation**: Click the "Start Simulation" button.
4.  **Observe**: The 7-segment display should start displaying numbers, typically counting from 0 to 9 and repeating.

## How to Use with Physical Arduino

1.  **Gather Components**: Collect all the hardware components listed above.
2.  **Wire Circuit**: Assemble the circuit on a breadboard according to the [Circuit Wiring](#circuit-wiring) diagram.
    *   **Important**: Ensure resistors are used for each segment to prevent damage to the LEDs or the Arduino.
    *   Connect the common cathode pin(s) of the 7-segment display to the Arduino's GND pin.
3.  **Connect Arduino**: Connect your Arduino UNO to your computer via USB.
4.  **Open Arduino IDE**: Launch the Arduino IDE.
5.  **Get Code**:
    *   Clone this repository or download the `.ino` file.
    *   Open the `.ino` file in the Arduino IDE.
6.  **Select Board & Port**:
    *   Go to `Tools > Board` and select "Arduino Uno".
    *   Go to `Tools > Port` and select the COM port your Arduino is connected to.
7.  **Upload Code**: Click the "Upload" button (right arrow icon) in the Arduino IDE.
8.  **Observe**: Once uploaded, the physical 7-segment display should behave as programmed.

## Customization

*   **Change Display Sequence**: Modify the `loop()` function in the Arduino sketch (`.ino` file) to display specific numbers, patterns, or characters.
*   **Control with Input**: Add buttons or a potentiometer to select which digit is displayed.
*   **Display Sensor Data**: Interface with sensors (e.g., temperature sensor) and display their readings.
*   **Common Anode Display**: If you use a common anode display, the common pin(s) connect to 5V, and you'll need to invert the logic in your Arduino code (LOW turns a segment ON, HIGH turns it OFF).

---

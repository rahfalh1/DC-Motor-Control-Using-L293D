# DC-Motor-Control-Using-L293D

## Overview
This project demonstrates how to control four DC motors using an Arduino Uno and two L293D motor driver ICs on the Tinkercad platform. The motors follow a predefined movement sequence by automatically changing their rotation direction based on the uploaded program.

## Features
- Controls 4 DC motors using 2 L293D motor drivers.
- Executes a time-based movement sequence.
- Simulated entirely in Tinkercad (no physical hardware required).
- Programmed using Arduino IDE (C/C++).

## Movement Sequence
The motors perform the following actions in a loop:

1. **Forward**: All motors move forward for **30 seconds**.
2. **Backward**: All motors reverse direction and move backward for **60 seconds**.
3. **Right/Left Toggle**:
   - Turn **Right** for 2 seconds.
   - Turn **Left** for 2 seconds.
   - This alternates repeatedly for a total of **60 seconds**.

## Components Used
- Arduino Uno R3
- 2 × L293D Motor Driver IC
- 4 × DC Motors
- Breadboard
- Jumper Wires
- Power Supply

## Software Used
- Arduino IDE
- Tinkercad (Circuit Simulator)

## Project Structure

DC-Motor-Control-Using-L293D/
│── sketch.ino
│── README.md


## Tinkercad Circuit Link
[Click here to view the circuit simulation](https://www.tinkercad.com/things/fXh6l9MyXRs-dazzling-bojo-wolt)

## How to Run the Code
1. Open the project in **Tinkercad Circuits**.
2. Upload the `sketch.ino` file to the Arduino board.
3. Click the **"Start Simulation"** button.
4. Watch the motors execute the full sequence (forward → backward → turning) automatically.

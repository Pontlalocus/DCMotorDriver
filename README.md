# Project:  BJT HS DC Motor Driver

## DCMotorDriver
DC Motor Driver Simple Board using Bipolar Junction Transistor (BJT).

# 1.0  Glosary


**BJT** - Bipolar Junction Transistor

**DC** - Direct Current

**Mon** - Monitor

**PCB** - Printed Circuit Board

**Ref Des** - Reference Designator



## 2.0  Overview

DC Motor Driver board is a shield for Arduino nano to drive motors on the simplest way possible.   It uses only high side driver suply to the motor with Bipolar Junction Transistors (BJT).

The Board can handle 4 Motors each of the motors are connected to the V(+) and V(-) directly to the output.  No other connections to drive th motors are required.

This board will only operate as a high side driver with 4 oputputs that can handle PWM pulses.  The PWM pulses are internally generated on the Arduino nano.   It is important that the Arduino nano is assembled to the board and programmed with the correct software for the motors to be able to work.

The board is capable of reading the current of each motor independently by using a shunt resistor to ground.   The current measurement is injected to the Analaog port of the Arduino Nano.   We use the Ports A0 to A3 to each of the motor current.  More information on how to read the values is explained below.

## 3.0  Block Diagram

<_Pending_>

## 4.0  External Connections   

## 4.1  Main Connector Pinout

|  Ref Des      | Pin #         | Signal Name   | Description        |
| ------------- |---------------| --------------|--------------------|
| P7            | 1             | Vin           |  Power Battery     |
| P7            | 2             | GND           |  Ground            |
| P7            | 3             | 1-TX          |  Serial TX         |
| P7            | 4             | 0-RX          |  Serial RX         |
| P7            | 5             | GND           |  Ground            |
| P7            | 6             | Motor1-V+     |  Motor1(+)         |
| P7            | 7             | Motor1-V-     |  Motor1(-)         |
| P7            | 8             | Motor2-V+     |  Motor2(+)         |
| P7            | 9             | Motor2-V-     |  Motor2(-)         |
| P7            | 10            | Motor3-V+     |  Motor3(+)         |
| P7            | 11            | Motor3-V-     |  Motor3(-)         |
| P7            | 12            | Motor4-V+     |  Motor4(+)         |
| P7            | 13            | Motor4-V-     |  Motor4(-)         |
| P7            | 14            | GND           |  Ground            |
| P7            | 15            | +5V           |  Power +5V         |

## 4.2  Arduino Nano Connector

|  Ref Des      | Pin #         | Signal Name      | Description         |
| ------------- |---------------| -----------------|---------------------|
| P1            | 1             | 1-TX             |  Serial TX          |
| P1            | 2             | 0-RX             |  Serial RX          |
| P1            | 3             | Reset            |  Reset              |
| P1            | 4             | GND              |  Ground             |
| P1            | 5             | 2-PWM1           |  Motor1 - PWM1      |
| P1            | 6             | 3-PWM2           |  Motor2 - PWM2      |
| P1            | 7             | 4-PWM3           |  Motor3 - PWM3      |
| P1            | 8             | 5-PWM4           |  Motor4 - PWM4      |
| P1            | 9             | 6-ESC1           |  Reserved           |
| P1            | 10            | Not Used         |  Not Used           |
| P1            | 11            | Not Used         |  Not Used           |
| P1            | 12            | Not Used         |  Not Used           |
| P1            | 13            | Not Used         |  Not Used           |
| P1            | 14            | Not Used         |  Not Used           |
| P1            | 15            | Not Used         |  Not Used           |
| P2            | 1             | Vin              |  Power Battery      |
| P2            | 2             | GND              |  Ground             |
| P2            | 3             | Reset            |  Reset              |
| P2            | 4             | +5V              |  Power +5V          |
| P2            | 5             | Not Used         |  Not Used           |
| P2            | 6             | Not Used         |  Not Used           |
| P2            | 7             | Not Used         |  Not Used           |
| P2            | 8             | A4 - Battery_V   |  Battery Voltage IN |
| P2            | 9             | A3 - Motor4_iout | Motor 4 current Mon |
| P2            | 10            | A2 - Motor3_iout | Motor 3 current Mon |
| P2            | 11            | A1 - Motor2_iout | Motor 2 current Mon |
| P2            | 12            | A0 -  Motor2_iout| Motor 1 current Mon |
| P2            | 13            | AREF             | Not Used            |
| P2            | 14            | +3.3V            | Power 3.3V          |
| P2            | 15            | 13 - SCK         | Serial Clock        |


## 5.0  General Specifications

General Specifications include typical operation specifications

## 5.1  Typical Specifications

**Operation Voltage**: Battery Vin must be equal to 9V +/- 1V
**Operating Temperature**: 0°C to 40°C
**Battery Input Current**:
1.  No Load = <_Pending_>.
2.  Individual Motor Max Load =<_xx A_>.
3.  All Motors Max Load = <_xx A_>.

**Battery Voltage Monitor Range**:  VBAT * 0.5.

**Battery Monitor Low Pass Filter**: <_Pending_>.

**Motor Current Monitor Formula**: Current * 0.1 in Amps.

**Motor Current Low Pass Filter**: <_Pending_>.


_Note: Motor current is same formula for all motors: Motor1, Motor2, Motor3 and Motor4

##  Project Design

## 6.1  Schematic Diagram

Refer to Schematic Diagram for wiring connections

[Schematic Diagram Files](/PBSS5480X Motor Driver/BJT_Motor_Driver_Shield_Schematic.pdf)

## 6.2  PCB Specification

### PCB Design Top View 

![PCB Top View](https://github.com/Pontlalocus/DCMotorDriver/blob/master/PBSS5480X%20Motor%20Driver/docs/PCB%20Board%20Top%20View%20-%20Gerber.png)

### PCB Design Bottom View

![PCB Bottom View](https://github.com/Pontlalocus/DCMotorDriver/blob/master/PBSS5480X%20Motor%20Driver/docs/PCB%20Board%20Bottom%20View%20-%20Gerber.png)

 



##  6.0  Design Verification

For making sure the board functioanlity is working correctly the following Components are used.  Follow the connection diagram and test the functioanlity of the board with this Software

## 6.1  External Components Requirements

Required External Components

### 6.1.1  Power Pack

1.  Power Pack: 9V
Example:
<_Pending_>.

### 6.1.2  DC Voltage Regulator

2.  DC Voltage Regulator 5V
Example:
<_Pending_>.


### 6.1.3  DC Motor

2.  DC Motor: 
Example:
<_Pending_>.

## 6.3  Design Verification Connections

Todo:  Add connections to system with actual pictures

## 6.4  Design Verification Software

Todo:  Software components,  How does the software works, how to flash software,  how to run software, 

## 6.5  Measure of the output signals and confirmation of General Specifications

Todo:  use a measurement device to confirm General Specifications:  Supply Voltage, Actual current vs adruino measured x 4, PWM signal x 4, Battery Monitor. 


## Future Generation Improvements
## TODO
1.  Add MQTT RF Transmitter
2.  Add Sensors for 3 axis accelerometer, Gyroscpe and Compass
3.  Add Output for Servo







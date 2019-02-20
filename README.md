# Project:  BJT HS DC Motor Driver

## DCMotorDriver
DC Motor Driver Simple Board using Bipolar Junction Transistor (BJT).

# 1.0  Glosary


**BJT** - Bipolar Junction Transistor

**DC** - Direct Current

**Qty**  - Quantity

**Mon** - Monitor

**PCB** - Printed Circuit Board

**Ref Des** - Reference Designator



## 2.0  Overview

DC Motor Driver board is a shield for Arduino nano to drive motors on the simplest way possible.   It uses only high side driver suply to the motor with Bipolar Junction Transistors (BJT).

The Board can handle 4 Motors each of the motors are connected to the V(+) and V(-) directly to the output.  No other connections to drive th motors are required.

This board will only operate as a high side driver with 4 oputputs that can handle PWM pulses.  The PWM pulses are internally generated on the Arduino nano.   It is important that the Arduino nano is assembled to the board and programmed with the correct software for the motors to be able to work.

The board is capable of reading the current of each motor independently by using a shunt resistor to ground.   The current measurement is injected to the Analaog port of the Arduino Nano.   We use the Ports A0 to A3 to each of the motor current.  More information on how to read the values is explained below.

## 3.0  Block Diagram


![BJT DC Motor Driver Block Diagram](https://github.com/Pontlalocus/DCMotorDriver/blob/master/PBSS5480X%20Motor%20Driver/docs/BlockDiagram_Rev0.png)

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

Refer to Schematic Diagram for wiring connections of the Project

![Schematic Diagram](https://github.com/Pontlalocus/DCMotorDriver/blob/master/PBSS5480X%20Motor%20Driver/docs/BJT_Motor_Driver_Shield_Schematic.png)


This project requires the Arduino Nano board to be used.  For information on the schematic diagram of the Arduino Nano please refer to the following page

![Arduino Nano Schematic Diagram](https://media.digikey.com/Photos/RDL/Arduino%20Nano%20-%20Schematic.png)

Note: External Link

## 6.2 Bill of Material

The following list of components are selected for the Design.  All are discrete components:

|  Item #       | Description                      | Qty | Reference Designator                                           |
| ------------- |----------------------------------| ----|----------------------------------------------------------------|
| 1             | PCB bare boards FR-4 Tg=140 2L   | 1   |  PCB 1                                                         |
| 2             | DIODE GEN PURP 250V 200MA SOD323 | 8   |  D2 D3 D7 D5 D8 D6 D9 D10                                      |
| 3             | CAP CER 10000PF 50V X7R 0603     | 5   |  C3 C9 C11 C19 C26                                             |
| 4             | CAP CER 0.1UF 50V X7R 0603       | 17  |  C6 C8 C17 C18 C23 C1 C2 C5 C15 C16 C22 C24 C25                |
| 5             | CAP CER 10UF 16V X7R 0805        | 4   |  C7 C13 C14 C21                                                |
| 6             | TRANS PNP 80V 4A SOT89           | 4   |  Q2 Q5 Q6 Q8                                                   |
| 7             | TRANS PREBIAS NPN 246MW SOT23-3  | 4   |  Q1 Q3 Q4 Q7                                                   |
| 8             | RES 0.01 OHM 1% 1/4W 0603        | 4   |  R5 R10 R11 R16                                                |
| 9             | RES SMD 10K OHM 5% 1/10W 0603    | 4   |  R2 R8 R9 R15                                                  |
| 10            | RES SMD 47K OHM 5% 1/10W 0603    | 6   |  R4 R12 R13 R17 R18 R19                                        |
| 11            | RES SMD 0 OHM JUMPER 1/10W 0603  | 0   |                                                                |
| 12            | RES SMD 680 OHM 1% 1/8W 0805     | 4   |  R3 R6 R7 R14                                                  |
| 13            | DIODE GEN PURP 400V 5A DO214AB   | 1   |  D1                                                            |
| 14            | TVS DIODE 10V 17V DO214AA        | 1   |  D4                                                            |
| 15            | Arduino Nano Board               | 1   |  BOARD 1                                                       |

The following list are components that are not assembled in the board

### Not Assembled 
C4 C10 C12 C20 R1

## 6.3  PCB Specification

PCB Board is FR-4.  Tickness 1.6mm.  2 layers.  Top Side Assembly.  Silkscreen in Top Side only.

Supplier selected for the first Job is JLPCB

### 6.3.1 PCB Design Top View 

![PCB Top View](https://github.com/Pontlalocus/DCMotorDriver/blob/master/PBSS5480X%20Motor%20Driver/docs/PCB%20Board%20Top%20View%20-%20Gerber.png)

### 6.3.2 PCB Design Bottom View

![PCB Bottom View](https://github.com/Pontlalocus/DCMotorDriver/blob/master/PBSS5480X%20Motor%20Driver/docs/PCB%20Board%20Bottom%20View%20-%20Gerber.png)

 



##  7.0  Design Verification

For making sure the board functioanlity is working correctly the following Components are used.  Follow the connection diagram and test the functioanlity of the board with this Software

## 7.1  External Components Requirements

Required External Components

### 7.1.1  Power Pack

Power Pack: 9V
Example:
<_Pending_>.

### 7.1.2  DC Voltage Regulator

DC Voltage Regulator 5V
Example:
<_Pending_>.


### 7.1.3  DC Motor

2.  DC Motor: 
Example:
<_Pending_>.

## 7.2  Design Verification Connections

Todo:  Add connections to system with actual pictures

## 7.3  Design Verification Software

Todo:  Software components,  How does the software works, how to flash software,  how to run software, 

## 7.4  Measure of the output signals and confirmation of General Specifications

Todo:  use a measurement device to confirm General Specifications:  Supply Voltage, Actual current vs adruino measured x 4, PWM signal x 4, Battery Monitor. 


## 8.0  Future Generation Improvements

### 8.1 TODO
1.  Add MQTT RF Transmitter
2.  Add Sensors for 3 axis accelerometer, Gyroscpe and Compass
3.  Add Output for Servo







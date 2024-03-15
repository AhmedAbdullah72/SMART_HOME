# SMART_HOME

This project explores building a smart home automation system using an STM32F401CC microcontroller and an RTOS (Real-Time Operating System). 
Microcontroller: STM32F401CC 
Operating System: Real-Time Operating System (RTOS) 
Sensors: Temperature sensor Light intensity sensor Presence detection sensor
Appliances controlled: Lights Fans Doors (automatic/manual control) Heaters (automatic/manual control) 
User interaction:

The user enters a password for system access. The user interacts with the system through a keypad to control various appliances and features in different rooms (Room 1, Room 2, Kitchen, Garage). There are options for manual and automatic control modes. Communication:

The code seems to use UART for communication with another microcontroller. Manual control commands and sensor data are likely transmitted through UART.

RTOS benefits: The RTOS helps manage multiple tasks simultaneously, ensuring smooth operation even with multiple sensors and functionalities

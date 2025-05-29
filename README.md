# AVR Countdown Timer with ATmega32

A simple countdown timer implemented using the ATmega32 microcontroller. The system allows users to input a specific time (hours, minutes, and seconds) using push buttons, displays the countdown on an LCD, and triggers a buzzer alarm once the timer reaches zero. The timer can be paused manually using a button.

---

## Features

- Input time via push buttons (hours, minutes, seconds)
- Real-time countdown display on 16x2 LCD
- Visual LED indication during countdown
- Audible buzzer alert when time ends
- Pause/resume functionality

---

## Components Used

| Component       | Description                         |
|----------------|-------------------------------------|
| ATmega32        | Main microcontroller (AVR architecture) |
| 16x2 LCD        | Time and status display             |
| 4 Push Buttons  | User input for hours, minutes, seconds, and start/pause |
| LEDs            | Visual indicator during countdown   |
| Buzzer          | Audible alarm at end of countdown   |
| Resistors       | Current limiting for inputs/outputs |
| Power Supply    | 5V regulated source                 |

---

## Project Structure

| File               | Description                                      |
|--------------------|--------------------------------------------------|
| `First LED Lab.c`  | Main application code (logic, display, timer)   |
| `LED_Core.h`       | LED initialization and control functions         |
| `Button_Core.h`    | Button input handling                            |
| `LCD_Core.h`       | LCD initialization and display utilities         |
| `PORT_Core.h`      | Port configuration utilities                     |
| `DIO_Core.h`       | Digital I/O operations                           |
| `SevSeg_Core.h`    | (Optional) For 7-segment display (not used here) |

---

## Functional Overview

### `main()`
- Initializes peripherals: ports, LCD, LEDs, buttons
- Displays a welcome animation
- Waits for user input to set the timer using buttons
- Starts the countdown upon pressing the fourth button

### `start(hours, min, sec)`
- Performs the countdown logic
- Updates the LCD with the current time
- Triggers the buzzer and blinking message upon completion

### `stop()`
- Checks for the pause button
- If pressed, pauses the countdown temporarily and turns on the LED

---

## Development Environment

- Microcontroller: ATmega32
- Language: C (AVR-GCC)
- IDE: Atmel Studio / Microchip Studio
- Simulation: Proteus (optional)
- Programmer: USBasp / AVR ISP

---

## How to Use

1. Power on the system.
2. Use:
   - Button 1 to increment hours
   - Button 2 to increment minutes
   - Button 3 to increment seconds
   - Button 4 to start or pause the countdown
3. The timer will display on the LCD and start counting down.
4. When the time reaches 0, the buzzer will sound and an alert will display.
5. The timer can be paused anytime using the fourth button.

---

## Notes

- Buttons are active-low (pressed = 0)
- LCD operations assume a 16x2 display
- `delay_ms()` is used for timing; accuracy may vary slightly due to internal clock and instruction cycles

---

## Demo (Optional)

You can add images or simulation GIFs of the working project here.

---

## License

This project is open-source and available under the MIT License.

---

## Author

Eyad  
Embedded Systems Developer | [LinkedIn](#) | [GitHub](#)

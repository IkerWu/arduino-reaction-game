# Arduino Reaction Speed Game

My first hardware project. Two players press their button as fast 
as possible after a red-yellow-green countdown. The one who presses 
first keeps their white LED on and gets a victory beep and the cycle 
repeats. 

## Inspiration

Built following the https://www.skool.com/robonyx which I used to learn 
the basic wiring and structure. I built each part as soon as the task was
said, so the design has not been followed word by word.

## Hardware used

- Elegoo Uno R3
- Red, yellow, green, and 2x white LEDs
- Active buzzer
- 2x buttons
- Resistors, breadboard, jumper wires

## What I learned

- Basic Arduino wiring and pin modes
- How INPUT_PULLUP works and why it matters
- Using randomSeed() to avoid repeating sequences
- Why using two buttons needs else-if, not two if statements

## Limitations and future ideas

The current version has no reaction time measurement, showing only who won.
Future versions could add millis() timing, an LCD display for scores or a 
false start detection. The code could also be written in a neater way with 
functions such as beep() for buzzer and countdownLED() for pin and wait time.

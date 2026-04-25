# Arduino Reaction Speed Game

A two-player reaction speed game built on Arduino. Players press their 
button as fast as possible after a red-yellow-green countdown. The first 
to press wins the round, their white LED stays on and their reaction time 
is printed to the Serial Monitor in milliseconds.

## Versions

### v1
Basic game loop with countdown and button detection. No timing, no false 
start detection.

### v2
- Refactored `beep(duration)` and `countdownLED(pin, waitTime)` helper functions
- Replaced `delay()` with `millis()` inside countdown
- False start detection: pressing during countdown triggers a noisy flash 
  and resets the countdown
- Reaction time measured with `millis()` and printed to serial monitor

## Inspiration
Built following the https://www.skool.com/robonyx which I used to learn 
the basic wiring and structure. I built each part as soon as the task was
said, so the design was not followed word by word. Version 2 adjustments are
unrelated to the tutorial 

## Hardware used
- Elegoo Uno R3
- Red, yellow, green, and 2x white LEDs
- Active buzzer
- 2x buttons
- Resistors, breadboard, jumper wires

## What I learned

### v1
- Basic Arduino wiring and pin modes
- How INPUT_PULLUP works and why it matters
- Using randomSeed() to avoid repeating sequences
- Why using two buttons needs else-if, not two if statements

### v2
- How millis() works as a non-blocking alternative to delay()
- Returning bool from functions to communicate state 
- False start detection using millis() loop
- For loops in C++ vs Python 
- Git workflow: commiting per feature with conventional commit messages

## Limitations
- No LCD display: reaction time shown via Serial Monitor only
- No score tracking across rounds
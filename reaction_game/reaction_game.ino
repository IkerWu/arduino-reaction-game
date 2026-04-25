int greenLED = 8;
int yellowLED = 9;
int redLED = 10; 

int buzzer = 6;

int lwhiteLED = 7;
int rwhiteLED = 11;

int lbutton = 5;
int rbutton = 13;

int buttonPressed = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(rwhiteLED, OUTPUT);
  pinMode(lwhiteLED, OUTPUT);

  pinMode(lbutton, INPUT_PULLUP);
  pinMode(rbutton, INPUT_PULLUP);

  randomSeed(analogRead(0));

}

void beep(int duration) {
  digitalWrite(buzzer, HIGH);
  delay(duration);
  digitalWrite(buzzer, LOW);
}

void countdownLED(int pin, int waitTime) {
  digitalWrite(pin, HIGH);
  beep(100);
  delay(waitTime);
  digitalWrite(pin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  countdownLED(redLED, 1000);
  countdownLED(yellowLED, 1000);
  countdownLED(greenLED, random(1000, 5000));

  digitalWrite(lwhiteLED, HIGH);
  digitalWrite(rwhiteLED, HIGH);

  while(buttonPressed == 0){
  
    if(digitalRead(lbutton)==0){
      buttonPressed = 1;
      digitalWrite(rwhiteLED, LOW);
    }  
    else if (digitalRead(rbutton)==0){
      buttonPressed = 1;
      digitalWrite(lwhiteLED, LOW);
    }
  }
  
  beep(300);
  delay(2000);
  digitalWrite(lwhiteLED, LOW);
  digitalWrite(rwhiteLED, LOW);
  buttonPressed = 0;

}

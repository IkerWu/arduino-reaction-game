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

void beep() {
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  beep();
  delay(1000);
  digitalWrite(redLED, LOW);

  digitalWrite(yellowLED, HIGH);
  beep();
  delay(1000);
  digitalWrite(yellowLED, LOW);

  digitalWrite(greenLED, HIGH);
  beep();
  delay(random(1000, 5000));
  digitalWrite(greenLED, LOW);

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

  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
  delay(2000);
  digitalWrite(lwhiteLED, LOW);
  digitalWrite(rwhiteLED, LOW);
  buttonPressed = 0;

}

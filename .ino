#include <Servo.h>

Servo servoLeft;
Servo servoRight;

int buttonPin = 2;
int ledPin = 7;
int closedPos = 6;
int openPos = 150;

bool isOpen = false;

void setup() {
  servoLeft.attach(9);
  servoRight.attach(10);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

  // Start closed
  servoLeft.write(0);
  servoRight.write(180);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    delay(200); // debounce

    if (isOpen) {
      closeHelmet();
    } else {
      openHelmet();
    }

    isOpen = !isOpen;

    // wait for button release
    while (digitalRead(buttonPin) == LOW);
  }
}

void openHelmet() {
  for (int pos = closedPos; pos <= openPos; pos++) {
    servoLeft.write(pos);
    servoRight.write(180 - pos);
    delay(10);
  }
  digitalWrite(ledPin, HIGH);
}

void closeHelmet() {
  for (int pos = openPos; pos >= closedPos; pos--) {
    servoLeft.write(pos);
    servoRight.write(180 - pos);
    delay(10);
  }
  digitalWrite(ledPin, LOW);
}
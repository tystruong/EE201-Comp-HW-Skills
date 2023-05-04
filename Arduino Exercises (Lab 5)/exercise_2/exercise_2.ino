// Author: Tyson Truong
// EE201 Spring 2023 | Lab 5: Exercise II
// 4/28/2023

// Exercise II: Two LEDs to any GPIO pins of the Arduino Uno which will blink alternatively

void setup() {
  // put your setup code here, to run once:
  // Declaring our pins as output
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // First LED using pin 13 with 1500 ms delay
  digitalWrite(13, HIGH);
  delay(1500);
  digitalWrite(13, LOW);
  delay(1500);

  // Second LED using pin 11 with 1500 ms delay
  digitalWrite(11, HIGH);
  delay(1500);
  digitalWrite(11, LOW);
  delay(1500);
}

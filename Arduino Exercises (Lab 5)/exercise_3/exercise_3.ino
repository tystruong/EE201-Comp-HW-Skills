// Author: Tyson Truong
// EE201 Spring 2023 | Lab 5: Exercise III
// 4/28/2023

// Exercise III: Interface a switch with digital D7 pin of the Arduino Uno which reads data 
// from pin whether if high or low in the Serial Monitor

void setup() {
  // put your setup code here, to run once:
  // Declaring baud rate for Serial Monitor as 9600
  Serial.begin(9600);

  // Use digital pin 7 as output
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Digital read pin 7 as state
  int state = digitalRead(7);

  // If state is high then print "Hello World!"
  if (state == HIGH) {
    Serial.println("Hello World!");
  }

  // Else print "It's 2023"
  else 
    Serial.println("It's 2023");
}

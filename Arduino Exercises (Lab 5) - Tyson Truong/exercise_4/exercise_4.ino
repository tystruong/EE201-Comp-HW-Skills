// Author: Tyson Truong
// EE201 Spring 2023 | Lab 5: Exercise IV
// 4/28/2023

// Exercise IV: 7 Segment Display that counts down from 9 to 0 in 15 
// seconds (number change every 1.5 seconds)

void setup() {
  // Set all the pins for the 7-segment display as outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // Display numbers from 9 to 0 in 15 seconds
  for (int i = 9; i >= 0; i--) {
    // Call displayDigit() to display the digit
    displayDigit(i);
    // Delay set to 1.5 seconds
    delay(1500);
  }
}

void displayDigit(int digit) {
  // Define 2D array with the segments for each digit (0 - 9) on the 7-segment display
  int num_array[10][7] = {
    { 1,1,1,1,1,1,0 },    // 0
    { 0,1,1,0,0,0,0 },    // 1
    { 1,1,0,1,1,0,1 },    // 2
    { 1,1,1,1,0,0,1 },    // 3
    { 0,1,1,0,0,1,1 },    // 4
    { 1,0,1,1,0,1,1 },    // 5
    { 1,0,1,1,1,1,1 },    // 6
    { 1,1,1,0,0,0,0 },    // 7
    { 1,1,1,1,1,1,1 },    // 8
    { 1,1,1,1,0,1,1 }     // 9
  };

  // Display the digit (from 9 to 0) by turning on and off the corresponding Arduino digital pins
  for (int j = 2; j <= 8; j++) {
    digitalWrite(j, num_array[digit][j-2] == 1 ? HIGH : LOW);
  }
}
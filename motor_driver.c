/*
    Project name : Motor Driver Module
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-motor-driver-module
*/

// Motor driver module connections
const int motorPin1 = 2; // Motor driver input pin 1 (IN1)
const int motorPin2 = 3; // Motor driver input pin 2 (IN2)

void setup() {
  pinMode(motorPin1, OUTPUT); // Set motor pin 1 as output
  pinMode(motorPin2, OUTPUT); // Set motor pin 2 as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Rotate the motor clockwise
  Serial.println("Rotating motor clockwise");
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(2000); // Run for 2 seconds
  
  // Stop the motor
  Serial.println("Stopping motor");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(1000); // Wait for 1 second
  
  // Rotate the motor counterclockwise
  Serial.println("Rotating motor counterclockwise");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(2000); // Run for 2 seconds
  
  // Stop the motor
  Serial.println("Stopping motor");
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(1000); // Wait for 1 second
}

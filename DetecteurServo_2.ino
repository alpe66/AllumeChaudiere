/*
  Arduino Starter Kit example
 Project 5  - Servo Mood Indicator

 This sketch is written to accompany Project 5 in the
 Arduino Starter Kit

 Parts required:
 servo motor
 10 kilohm potentiometer
 2 100 uF electrolytic capacitors

 Created 13 September 2012
 by Scott Fitzgerald

 http://www.arduino.cc/starterKit

 This example code is part of the public domain
 */

// include the servo library
#include <Servo.h>

Servo myServo;  // create a servo object

int angle;   // variable to hold the angle for the servo motor
int ldrE = 0;             //analog pin to which LDR is connected
int ldrE_value = 0;        //variable to store LDR values
int ldrB = 1;             //analog pin to which LDR is connected
int ldrB_value = 0;        //variable to store LDR values
int diff = 0;

void setup() {
  myServo.attach(9); // attaches the servo on pin 9 to the servo object
  Serial.begin(9600); // open a serial connection to your computer
}

void loop() {
//  potVal = analogRead(potPin); // read the value of the potentiometer
  // print out the value to the serial monitor
//  Serial.print("potVal: ");
//  Serial.print(potVal);

  // scale the numbers from the pot
//  angle = map(potVal, 0, 1023, 0, 179);

  // print out the angle for the servo motor
//  Serial.print(", angle: ");
//  Serial.println(angle);

  // set the servo position
  myServo.write(angle);

  // wait for the servo to get there
  delay(15);
}



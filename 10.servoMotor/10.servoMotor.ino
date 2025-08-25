/*
  Author:

  Learning Intention:
  The students will learn how to connect and control a servo motor.

  Success Criteria:
    1.  I understand how to connect the servo motor
    2.  I can manually write different degrees of movement to the servo
    3.  I can map a potentiometer to a servo and control its movement
    4.  I understand that a 180deg servo angle of movement is set by a
        frequency signal sent from the microcontroller

  Student Notes: 

  Documentation:
    https://www.sparkfun.com/servos
    https://github.com/arduino-libraries/Servo <-- We are still using this library

  Schematic:
    https://www.tinkercad.com/things/lQ9RyYJRoLn?sharecode=MKlN0A7R0WGodkdTRKkPJO7I8PeI5L_GCR7pCclQ0qM
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/10.servoMotor/Bootcamp-servoMotor.png
*/
// Include for OLED Screen
#include <>
#include
#include
#include

#include <Servo.h>
#include "Ultrasonic.h"

Ultrasonic myUltraSonicSensor(5);
Servo myservo; // create servo object to control a servo
unsigned static int servoPin = 6;

int potpin = A1; // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
   Serial.begin(9600);
  myservo.attach(servoPin); // attached  the servo on pin 9 to the servo object
}

void loop() {
 /*val = analogRead (potpin);     // readthe value of the potentiometer
  val = map(val, 0, 1023, 0, 180);    // scale it to use it with the servo
  myservo.write(val);                 // sets the servo position according to
  delay(15);                          // waits for the servo to get there */
    unsigned long RangeInCentimeters;

  RangeInCentimeters = myUltraSonicSensor.distanceRead(); // two measurements 
  Serial.print("RangeInCentimetres");//0~400cm
  Serial.println(" cm");
  delay(250);
}
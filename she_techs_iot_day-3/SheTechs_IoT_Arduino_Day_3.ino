/*
  author: degaga wolde
  email: degagawolde@gmail.com
*/

/*
  1. in this arduino project, the value of photoresistor sensor is read and 
  used to set the brightness of LED.
  2. the value read from potentiometer is used to set the angle of the servo motor.
*/
#include <Servo.h>
int potPin = A0; //analog pin to connect potentimeter
int photPin = A1; // analog pin to connect photoresistor 
int ledPin = 4;   // digital pin to connect led
int servoPin = 3; // digital pin to connect servo motor

int potValue = 0;  //hold ptentiometer value
int photValue = 0; //hold photoresistor value
Servo myServo;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(servoPin, OUTPUT);
}

void loop(){
  potValue = analogRead(potPin);
  photValue = analogRead(photPin);
  
  analogWrite(ledPin, photValue/4);
  myServo.write(potValue*180/1023);
}

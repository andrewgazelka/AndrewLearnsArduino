#include "io.h"

void setup() 
{
  pinMode(LED_A, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_C, OUTPUT);
  pinMode(LED_D, OUTPUT);
  pinMode(LED_E, OUTPUT);
  pinMode(LED_F, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(POTENTIOMETER, INPUT);
  pinMode(MOTOR, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int val = analogRead(POTENTIOMETER);
  Serial.println(val);
  analogWrite(MOTOR,val);
  delay(1000);
}


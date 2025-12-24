#include <Arduino.h>

const int leftEngine = A0;
const int rightEngine = A1;
const int flaps = A2;

int leftVal;
int rightVal;
int flapsVal;

void setup() {
  Serial.begin(115200);
};

void loop() {
  leftVal = analogRead(leftEngine);
  rightVal = analogRead(rightEngine);
  flapsVal = analogRead(flaps);

  Serial.print(leftVal); Serial.print(",");
  Serial.print(rightVal); Serial.print(",");
  Serial.println(flapsVal);
};
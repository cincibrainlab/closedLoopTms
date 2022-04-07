#include "Arduino.h";
const int TMS_PIN = 4;  // the Arduino pin, which connects to the IN pin of relay
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(TMS_PIN, OUTPUT);
}
 
void loop() {
  if (Serial.available() > 0 ) {
    digitalWrite(TMS_PIN, HIGH);
    delay(10);
    while (Serial.available() > 0) {
    Serial.read();
    }
  }
  else {
    digitalWrite(TMS_PIN, LOW);
  }
}
 

#include "constant.h"
void setup() {
  Serial.begin(115200);
  Serial2.begin(1000000,SERIAL_8N1,16,17);        // 16Tx,17Rx Mega  18-RX1,17-RX2  serial 1
  pinMode(PIN_PE0, OUTPUT);   // In 
  pinMode(PIN_PE1, OUTPUT);   // In 
  pinMode(PIN_PE2, OUTPUT);   // Out      
  pinMode(PIN_PE3, OUTPUT);   // Out
  pinMode(StartSW ,INPUT_PULLUP);//#13
  pinMode(servoInt ,OUTPUT);
  pinMode(NANO_reset, OUTPUT);
  digitalWrite(NANO_reset,  LOW);
  delay(500);
  digitalWrite(NANO_reset, HIGH);
  digitalWrite(PIN_PE0,HIGH);
  digitalWrite(PIN_PE1,LOW);
  digitalWrite(PIN_PE3,LOW);
  digitalWrite(PIN_PE2,HIGH);
  Serial.println("TEST_start");
  while(digitalRead(StartSW) == HIGH){}//1-0
  /*
  Serial.println("nano_resetSUMI");
  while(digitalRead(StartSW) == HIGH){}//1-0
  digitalWrite(PIN_PE2, HIGH);    // Servo Out Sub  HIGH_PE2
  digitalWrite(PIN_PE3, LOW);             // LOOP_SUB　緑19
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("OUT-SUMI");
  while(digitalRead(StartSW) == HIGH){}//1-0
  */
  
}

void loop() {
  START_SW();
  IN_18_PE1 ();
  OUT_19_PE3 ();
  delay(1);
  // put your main code here, to run repeatedly:

}

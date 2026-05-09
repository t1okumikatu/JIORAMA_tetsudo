#include <esp_now.h>
#include <WiFi.h>
#include <Arduino.h>
#include "SPIFFS.h"
#include "constant.h"

void setup() {
  Serial.begin(115200);   // USB_Moniter 
  Serial2.begin(1000000,SERIAL_8N1,16,17);        // 16Tx,17Rx Mega  18-RX1,17-RX2  serial 1
  APSTA();
  nowpeer();
  //guide();
  compete_G();
  setup_servo();
  Serial.println("start_button");
  startbutton=1;
  
  pinMode(StartSW ,INPUT_PULLUP);
  pinMode(servoInt ,OUTPUT);
 
   // SPIFFSのセットアップ
  if(!SPIFFS.begin(true)){
    //Serial.println("An Error has occurred while mounting SPIFFS");
    return;
  }
   //==========================

 

//Broad();
guide();
  delay(2000);
  
   
 //=============
  Serial.print("start_button=");
  Serial.println(startbutton);
  while(digitalRead(StartSW) == HIGH){}//1-0
  startbutton=0; 
  Broad();
  Serial.print("start_button=");
  Serial.println(startbutton);
  delay(2000); 
 while(digitalRead(StartSW) == HIGH){}//1-0
  startbutton=1;
  Broad();
  Serial.print("start_button=");
  Serial.println(startbutton);
 delay(2000); 
 Serial2.write("R");
 delay(100);
 Serial2.write("4");//1=2ms 4ms  err 6ms-OK Loop-4ms
 Serial2.write("Z");

 setup_servo();
 //===============
 
  //========
 

}
void loop() {
Serial.println(data[1]);
 delay(1); 
Receive();
in_Servo_Contlor();
out_Servo_Contlor();
Serialprint2();
startFlag_compete();
control_3();
control_4();
Broad();
STOP();
}
  

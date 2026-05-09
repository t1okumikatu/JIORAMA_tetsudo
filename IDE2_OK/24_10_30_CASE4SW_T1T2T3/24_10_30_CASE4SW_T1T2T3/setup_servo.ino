void setup_servo(){
  /*
   if(Train1==22){
     esp_now_peer_info_t peerInfo;
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  memcpy(peerInfo.peer_addr, broadcastAddress2, 6);//1
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    //Serial.println("Failed to add peer");
    return;
  }
  }
  //=====================
   if(Train2==32){
     esp_now_peer_info_t peerInfo;
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  memcpy(peerInfo.peer_addr, broadcastAddress3, 6);//2
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    //Serial.println("Failed to add peer");
    return;
  }
  }
  //===============================
   /// register fourth peer Train3
   delay(100);
  if(Train3==21){ 
     esp_now_peer_info_t peerInfo;
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  memcpy(peerInfo.peer_addr, broadcastAddress4, 6);//3
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    //Serial.println("Failed to add peer");
    return;
  }
  }
  //====================
   if(Train4==31){
     esp_now_peer_info_t peerInfo;
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  memcpy(peerInfo.peer_addr, broadcastAddress5, 6);//4
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    //Serial.println("Failed to add peer");
    return;
  }
  }
  */
  digitalWrite(servoInt, HIGH);
  pinMode(PIN_PE0, OUTPUT);   // In 
  pinMode(PIN_PE1, OUTPUT);   // In 
  pinMode(PIN_PE2, OUTPUT);   // Out      
  pinMode(PIN_PE3, OUTPUT);   // Out
  //SubSetTime22=MainSetTime32;
            
 //===servo-1-in   HIGHから立ち上げる
 
  digitalWrite(PIN_PE0, HIGH);         // Servo_1-In-Sub 青４
  digitalWrite(PIN_PE1, LOW);          // Servo_2-In-Main　橙18
  delay(1);
  ServoInFlag = 0;
  //===servo-1-in
   //===servo-1-out 
  digitalWrite(PIN_PE2, HIGH);         // Servo_1-Out-Sub 白23
  digitalWrite(PIN_PE3, LOW);          // Servo_2-Out-Main　緑19
  delay(1);
  ServoOutFlag1 = 0;
  ServoOutFlag2 = 0;
  //===servo-1-out
  //Data5=1;//ServoIn
  Data6=0;//ServoOut
  ;
 
  delay(3);
} 
  
   
 

#include <RFduinoBLE.h>
int pin = 2;

void setup() {
  Serial.begin(9600);
  RFduinoBLE.advertisementData = "RFduino";
  RFduinoBLE.begin();
}

void loop() {
  RFduino_ULPDelay(INFINITE);
  analogWrite(pin, 255);
}
/*
void RFduinoBLE_onConnect() {
  Serial.println("connected");
}

void RFduinoBLE_onDisconnect() {
  Serial.println("disconnected");
}
*/
void RFduinoBLE_onReceive(char *data, int len) {
  for(int i = 0; i <len;i++)
  {
    Serial.println(data[i]);
  }
  //Serial.print("\n");
  
  RFduinoBLE.send(data, len);
  
}


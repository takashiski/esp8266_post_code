#include <ESP8266WiFi.h>

const char* SSID = "my_ssid";
const char* SSID_PASS = "my_ssid_pass";
const uint16_t CONNECTION_WAITING_MS=5000;

void setup() {
  Serial.begin(115200);
  WiFi.begin(SSID,SSID_PASS);
  for(uint16_t i=0;
    i<CONNECTION_WAITING_TIME&&WiFi.status()!=WL_CONNECTED;i+=1)
  {
    Serial.println("not connect yet");
    delay(100);
  }
  if(WiFi.status()!=WL_CONNECTED)
  {
    Serial.print("CANNOT connect to ");
    Serial.println(SSID);
  }

  Serial.println("CONNECTED");
}

void loop() {
  //do nothing
}

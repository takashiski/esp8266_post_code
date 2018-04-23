#include <ESP8266WiFi.h>

const char* SSID = "my_ssid";
const char* SSID_PASS = "my_ssid_pass";

void setup() {
  Serial.begin(115200);
  WiFi.begin(SSID,SSID_PASS);
  while(WiFi.status()!=WL_CONNECTED)
  {
    Serial.println("not connect yet");
    delay(100);
  }
  Serial.println("CONNECTED");
}

void loop() {
  //do nothing
}

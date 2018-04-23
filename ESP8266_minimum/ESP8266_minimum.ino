#include <ESP8266WiFi.h>

const char* SSID = "my_ssid";
const char* SSID_PASS = "my_ssid_pass";

void setup() {
  WiFi.begin(SSID,SSID_PASS);
}

void loop() {

}

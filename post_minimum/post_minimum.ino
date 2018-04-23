#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

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

  HTTPClient http;
  http.begin("http://192.168.1.100:1880/test");
  http.addHeader("Content-Type","application/x-www-form-urlencoded");
  String params("test=test&this=this");
  int code=http.POST(params);
  Serial.println(code);
  if(code>0)
    Serial.println(http.getString());
  
  ESP.deepSleep(1000*1000*60*5);
}

void loop() {
  //do nothing
}

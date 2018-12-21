#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <Servo.h>

Servo servo;

const char *ssid     = "<your-ssid>";
const char *password = "<your-password>";

WiFiUDP ntpUDP;

NTPClient timeClient(ntpUDP);

bool chimed = false;

void setup() {
  initServo();
  
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  timeClient.begin();

  chime(2);

  delay(2000);
}

void loop() {


  timeClient.update();

  String t = timeClient.getFormattedTime();
  String m = t.substring(3, 5);

  if (m == "12") {
    if (!chimed) {
      chimed = true;
      chime(12);
    }
  } else {
    chimed = false;
  }

  delay(1000);
}

void initServo()
{
  servo.attach(2); //D4

  servo.write(90);
  delay(300);

  servo.detach();
}

void chime(int n)
{
  servo.attach(2); //D4

  for (int i = 0 ; i < n ; i++) {
    servo.write(0);
    delay(300);

    servo.write(90);
    delay(300);
  }

  servo.detach();
}

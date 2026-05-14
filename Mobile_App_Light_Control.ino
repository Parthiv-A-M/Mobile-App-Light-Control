#define BLYNK_TEMPLATE_ID "TMPL3fpsSwH-6"
#define BLYNK_TEMPLATE_NAME "Light Switch"
#define BLYNK_AUTH_TOKEN "bp9p1vkDQ7NtUl2ZOyhaSaIlVGlrSoBD"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "ECE_IOT_LAB";
char pass[] = "gcemec@123";

#define LED 2

BLYNK_WRITE(V0)
{
  int state = param.asInt();
  digitalWrite(LED, state);
}

void setup()
{
  Serial.begin(115200);

  pinMode(LED, OUTPUT);

  Serial.println("Connecting...");

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}

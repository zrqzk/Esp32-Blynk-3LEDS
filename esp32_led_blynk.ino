#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Credenziali WiFi
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "latuawifi";
char pass[] = "lapass";

// Timer Blynk
BlynkTimer timer;

// Pin LED
#define LED1 13 // Rosso
#define LED2 12 // Giallo
#define LED3 14 // Verde

// Variabili di stato
int SW_State_M = 0;
int SW_State_K = 0;
int SW_State_H = 0;

// Controllo LED Rosso (Virtual Pin V0)
BLYNK_WRITE(V0) {
SW_State_M = param.asInt();
digitalWrite(LED1, SW_State_M);
Serial.println(SW_State_M ? "RED ON" : "RED OFF");
}

// Controllo LED Giallo (Virtual Pin V1)
BLYNK_WRITE(V1) {
SW_State_K = param.asInt();
digitalWrite(LED2, SW_State_K);
Serial.println(SW_State_K ? "YELLOW ON" : "YELLOW OFF");
}

// Controllo LED Verde (Virtual Pin V2)
BLYNK_WRITE(V2) {
SW_State_H = param.asInt();
digitalWrite(LED3, SW_State_H);
Serial.println(SW_State_H ? "GREEN ON" : "GREEN OFF");
}

void setup() {
// Configurazione pin
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);

// Avvio Serial e Blynk
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);
}

void loop() {
Blynk.run();
timer.run();
}
# Controllo LED con ESP32 e Blynk

Questo progetto ti permette di accendere e spegnere tre LED (rosso, giallo e verde) usando un ESP32 e l'app Blynk

## Materiale necessario

- Scheda ESP32 Dev Module
- 3 LED (uno rosso, uno giallo, uno verde)
- 3 resistori da 220Ω
- Breadboard e cavetti jumper
- Connessione WiFi
- App Blynk (versione nuova, Blynk IoT)

## Collegamenti

| LED       | Colore  | GPIO ESP32 |
|-----------|---------|------------|
| LED Rosso | LED1    | GPIO 13    |
| LED Giallo| LED2    | GPIO 12    |
| LED Verde | LED3    | GPIO 14    |

Collega ogni LED in serie con un resistore da 220Ω e poi al pin indicato sull’ESP32. Il catodo va a GND.

## Come funziona

Ogni LED è controllato da un pulsante virtuale nell'app Blynk:

- V0 → LED Rosso  
- V1 → LED Giallo  
- V2 → LED Verde  

Quando premi un pulsante, il LED corrispondente si accende o si spegne tramite WiFi.

## Configurazione dell'app Blynk

1. Scarica l'app da [App Store](https://apps.apple.com/us/app/blynk-iot/id1559317868) o [Google Play](https://play.google.com/store/apps/details?id=cloud.blynk&hl=it) oppure vai sul sito web  **[Blynk IoT](https://blynk.cloud/dashboard/login](https://www.blynk.io/))**
2. Crea un nuovo account (se non lo hai già)
3. Crea un nuovo **Template**
   - Dai un nome (es. "ESP32 LED")
   - Seleziona **ESP32** come tipo di dispositivo
   - Salva
4. Vai su **Datastreams** e aggiungi 3 pin virtuali:
   - V0 → Boolean → Write
   - V1 → Boolean → Write
   - V2 → Boolean → Write
5. Crea un nuovo dispositivo usando il template
6. Copia il tuo **Auth Token** e incollalo nel codice Arduino
7. Nell'app, aggiungi 3 pulsanti e collegali ai pin virtuali V0, V1 e V2
   - Imposta ogni pulsante su modalità **Switch**

## Librerie da installare

Apri Arduino IDE e installa queste librerie dal Library Manager:

- **Blynk** (cerca "Blynk" e installa la libreria ufficiale)
- **BlynkESP32_BT_WF** (per supporto WiFi/Bluetooth su ESP32)
- **WiFi** (inclusa per ESP32)
- **WiFiClient** (inclusa)
- **BlynkSimpleEsp32.h** (inclusa nella libreria Blynk)

## Come iniziare

1. Apri il file `esp32_led_blynk.ino`
2. Inserisci il tuo token Blynk e le credenziali WiFi
3. Seleziona la scheda **ESP32 Dev Module** da Strumenti → Scheda
4. Carica il codice sulla scheda
5. Apri il monitor seriale a 9600 baud
6. Avvia l'app Blynk e prova a controllare i LED

## Vuoi vedere una simulazione?

Puoi testare il progetto direttamente online su Wokwi:  
👉 [Simulazione su Wokwi](https://wokwi.com/projects/443007289241666561)

## Schema elettrico

![Schema LED](https://github.com/zrqzk/Esp32-Blynk-LEDS/blob/3f72fc12330017731c60210d89cc4dd5234a21df/wiring_diagram.png)

## Autori 

![](https://github.com/zrqzk/Esp32-Blynk-LEDS/blob/3f72fc12330017731c60210d89cc4dd5234a21df/22.png)              ![](https://github.com/zrqzk/Esp32-Blynk-LEDS/blob/24472d9c5348a346a29d57cb5456dfe6b065c9d1/22.1.png)
## Licenza

Questo progetto è distribuito con licenza MIT. Puoi usarlo, modificarlo e condividerlo liberamente.

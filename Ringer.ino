// Ringer.ino

#define PIN_TONE_OUTPUT 10

#define COL_1 11
#define COL_2 12
#define ROW_1 A0
#define ROW_2 A1
#define ROW_3 A2
#define ROW_4 A3

#define LOOP_DELAY 100
#define SETUP_LIMIT 50
#define MAX_POSITIONS 8
#define SETUP_TIMEOUT 20000

#include "Keyboard.h"
#include "Melody.h"
#include "ConfigMelody.h"

Melody ringer;
ConfigMelody configMelody;


void setup() {
  Serial.begin(115200); // Inicializar comunicación Serial
  Serial.println("Starting");
  ringer.setup();
  setupKeyboard();
  configMelody.print();
}

uint32_t timeReference = 0;
uint32_t lastUpdate = 0;

uint8_t pressedTimes = 0;
uint8_t lastKb = 0;

void setupLoop(uint32_t startTime, uint8_t user) {

  int8_t currentOption = 0;

  Serial.print("Setup for user: ");
  Serial.println(user + 1);

  ringer.stop();
  ringer.confirmation();
  ringer.confirmation();
  ringer.confirmation();

  while (1) {
    uint32_t currentTime = millis();
    timeReference = currentTime;

    // En caso de superar limite de tiempo sin completar la configuración, retorna al loop principal
    if (currentTime - startTime > SETUP_TIMEOUT) {
      ringer.stop();
      ringer.cancel();
      ringer.cancel();
      ringer.cancel();
      return;
    }

    if (timeReference - lastUpdate > LOOP_DELAY) {
      lastUpdate = timeReference;
      uint8_t pressedKey = readKeyboard();

      if (pressedKey > 0) {
        startTime = currentTime;
        Serial.print("Tecla: ");
        Serial.println(pressedKey);
      }

      if (pressedKey == 8) {
        currentOption++;
        ringer.stop();
        while (readKeyboard() != 0);;
      }

      if (pressedKey == 4) {
        currentOption--;
        ringer.stop();
        while (readKeyboard() != 0);;
      }

      if (pressedKey == 1) {
        configMelody.update(user, currentOption, ringer.whatIsPlaying()->name);
        ringer.stop();
        ringer.confirmation();
        ringer.confirmation();
        ringer.confirmation();
        return;
      }

      currentOption = currentOption % AVAILABLE_MELODIES;
      currentOption = currentOption < 0 ? AVAILABLE_MELODIES - 1 : currentOption;


    }


    if (!ringer.getIsPlaying()) {
      ringer.play(user, currentOption);
    }

    ringer.loop();

  }

}

void loop() {

  timeReference = millis();


  if (timeReference - lastUpdate > LOOP_DELAY) {
    lastUpdate = timeReference;
    if (ringer.getIsPlaying()) {
      return;
    }
    uint8_t pressedKey = readKeyboard();
    uint8_t user = lastKb - 1;

    if (lastKb != pressedKey && lastKb != 0) {
      if (pressedTimes < SETUP_LIMIT) {
        ringer.play(user, configMelody.get(user));
      }
      if (pressedTimes >= SETUP_LIMIT) {
        setupLoop(timeReference, user);
      }

      pressedTimes = 0;
      lastKb = 0;
    }


    if (pressedKey > 0) {
      lastKb = pressedKey;
      Serial.print("Tecla: ");
      Serial.println(pressedKey);
      if (pressedTimes < SETUP_LIMIT) {
        ringer.beep();
      } else {
        ringer.warn();
      }


      pressedTimes ++;
    }

  }

  ringer.loop();
}

// Melody.h
#include "Scores.h"




class Melody {
  private:
    // Array de todas las melodías disponibles


    // Variables de control
    uint32_t lastToneTime = 0;
    int currentNoteIndex = 0;
    bool isPlaying = false;
    int melodiaActual = 0;
    int pinTone;
    int pinLed;

    // Buffer for current note
    Note currentNote;
    // Buffer for current melody metadata
    MelodyScore currentMelodyMetadata;

  public:
    Melody(int pin_tone = PIN_TONE_OUTPUT, int pin_led = LED_BUILTIN) {
      pinTone = pin_tone;
      pinLed = pin_led;
    }

    void setup() {
      pinMode(pinTone, OUTPUT);
      pinMode(pinLed, OUTPUT);
      stop();
      for (uint8_t pin = 2; pin <= 9; pin++) {
        pinMode(pin, OUTPUT);
      }
    }

    void play(uint8_t user, uint8_t indice) {
      if (indice >= 0 && indice < AVAILABLE_MELODIES) {
        readMelodyMetadataFromPROGMEM(&melodies[indice], currentMelodyMetadata);
        Serial.print("Playing tone: ");
        Serial.print(currentMelodyMetadata.name);
        Serial.print(" for user: ");
        Serial.println(user + 1);
        melodiaActual = indice;
        isPlaying = true;
        currentNoteIndex = 0;
        lastToneTime = millis();
        digitalWrite(user + 2, HIGH);
      }
    }

    MelodyScore* whatIsPlaying() {
      return &currentMelodyMetadata;
    }

    bool getIsPlaying() {
      return isPlaying;
    }

    void beep() {
      tone(pinTone, NOTE_B5, 80);
    }

    void confirmation() {
      noTone(pinTone);
      tone(pinTone, NOTE_A5, 100);
      delay(100);
      tone(pinTone, NOTE_A4, 200);
      delay(200);
    }

    void cancel(){
      noTone(pinTone);
      tone(pinTone, NOTE_B3, 100);
      delay(100);
      tone(pinTone, NOTE_B2, 200);
      delay(200);  
    }

    void warn() {
      tone(pinTone, NOTE_E5, 80);
    }

    void stop() {
      isPlaying = false;
      noTone(pinTone);
      currentNoteIndex = 0;
      for (uint8_t pin = 2; pin <= 9; pin++) {
        digitalWrite(pin, LOW);
      }
      digitalWrite(LED_BUILTIN, LOW);
    }

    void loop() {
      if (!isPlaying) {
        return;
      }

      uint32_t currentTime = millis();

      if (currentTime - lastToneTime >= currentNote.duration + 50) {
        noTone(pinTone);

        currentNoteIndex++;

        if (currentNoteIndex >= currentMelodyMetadata.noteCount) {
          stop();
          return;
        }

        // Read next note from PROGMEM
        readNoteFromPROGMEM(&currentMelodyMetadata.notes[currentNoteIndex], currentNote);


        if (currentNote.frequency > 0) {
          tone(pinTone, currentNote.frequency);
        }

        lastToneTime = currentTime;
        digitalWrite(pinLed, !digitalRead(pinLed));
      }
    }
};

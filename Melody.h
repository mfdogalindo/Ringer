// Definición de las notas musicales en Hz
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988

#define AVAILABLE_MELODIES 10


// Estructura para almacenar una nota
struct Nota {
  int frecuencia;
  int duracion;
};

// Estructura para almacenar una melodía completa
struct MelodyScore {
  const char* nombre;
  Nota* notas;
  int numeroNotas;
};

class Melody {
  private:
    // Melodía 1: Für Elise (simplificada)
    static inline Nota melodia1[] = {
      {NOTE_E5, 150}, {NOTE_DS5, 150}, {NOTE_E5, 150}, {NOTE_DS5, 150},
      {NOTE_E5, 150}, {NOTE_B4, 150}, {NOTE_D5, 150}, {NOTE_C5, 150},
      {NOTE_A4, 300}, {0, 150}, {NOTE_E4, 150}, {NOTE_B4, 150},
      {NOTE_C5, 150}, {NOTE_A4, 300}
    };

    // Melodía 2: Nokia Tune (Gran Vals)
    static inline Nota melodia2[] = {
      {NOTE_E5, 150}, {NOTE_D5, 150}, {NOTE_FS4, 300}, {NOTE_GS4, 300},
      {NOTE_CS5, 150}, {NOTE_B4, 150}, {NOTE_D4, 300}, {NOTE_E4, 300},
      {NOTE_B4, 150}, {NOTE_A4, 150}, {NOTE_CS4, 300}, {NOTE_E4, 300}
    };

    // Melodía 3: Super Mario Bros (simplificado)
    static inline Nota melodia3[] = {
      {NOTE_E5, 150}, {NOTE_E5, 150}, {0, 150}, {NOTE_E5, 150},
      {0, 150}, {NOTE_C5, 150}, {NOTE_E5, 300}, {NOTE_G5, 300},
      {0, 300}, {NOTE_G4, 300}
    };

    // Melodía 4: Tetris Theme A (Korobeiniki)
    static inline Nota melodia4[] = {
      {NOTE_E5, 150}, {NOTE_B4, 75}, {NOTE_C5, 75}, {NOTE_D5, 150},
      {NOTE_C5, 75}, {NOTE_B4, 75}, {NOTE_A4, 150}, {NOTE_A4, 75},
      {NOTE_C5, 75}, {NOTE_E5, 150}, {NOTE_D5, 75}, {NOTE_C5, 75},
      {NOTE_B4, 150}
    };

    // Melodía 5: Star Wars Imperial March
    static inline Nota melodia5[] = {
      {NOTE_G4, 300}, {NOTE_G4, 300}, {NOTE_G4, 300},
      {NOTE_DS4, 225}, {NOTE_AS4, 75}, {NOTE_G4, 300},
      {NOTE_DS4, 225}, {NOTE_AS4, 75}, {NOTE_G4, 600}
    };

    // Melodía 6: Beep simple
    static inline Nota melodia6[] = {
      {NOTE_C5, 150}, {0, 100}, {NOTE_C5, 150}, {0, 100},
      {NOTE_C5, 150}, {0, 100}, {NOTE_C5, 300}
    };

    // Melodía 7: Ascending Alert
    static inline Nota melodia7[] = {
      {NOTE_C4, 150}, {NOTE_E4, 150}, {NOTE_G4, 150}, {NOTE_C5, 300},
      {0, 150},
      {NOTE_C5, 150}, {NOTE_G4, 150}, {NOTE_E4, 150}, {NOTE_C4, 300}
    };

    // Melodía 8: Doorbell
    static inline Nota melodia8[] = {
      {NOTE_E5, 200}, {NOTE_C5, 400},
      {0, 300},
      {NOTE_E5, 200}, {NOTE_C5, 400},
      {0, 300},
      {NOTE_E5, 200}, {NOTE_C5, 400}
    };

    // Melodía 9: Police Siren
    static inline Nota melodia9[] = {
      {NOTE_A4, 200}, {NOTE_D5, 200}, {NOTE_A4, 200}, {NOTE_D5, 200},
      {0, 300},
      {NOTE_A4, 200}, {NOTE_D5, 200}, {NOTE_A4, 200}, {NOTE_D5, 200},
    };

    // Melodía 10: Classic Phone
    static inline Nota melodia10[] = {
      {NOTE_B4, 200}, {0, 100}, {NOTE_E5, 200}, {0, 100},
      {NOTE_B4, 200}, {0, 100}, {NOTE_E5, 200}
    };

    // Array de todas las melodías disponibles
    MelodyScore melodias[AVAILABLE_MELODIES] = {
      {"Fur Elise", melodia1, sizeof(melodia1) / sizeof(melodia1[0])},
      {"Nokia Tune", melodia2, sizeof(melodia2) / sizeof(melodia2[0])},
      {"Super Mario", melodia3, sizeof(melodia3) / sizeof(melodia3[0])},
      {"Tetris", melodia4, sizeof(melodia4) / sizeof(melodia4[0])},
      {"Imperial March", melodia5, sizeof(melodia5) / sizeof(melodia5[0])},
      {"Simple Beep", melodia6, sizeof(melodia6) / sizeof(melodia6[0])},
      {"Ascending", melodia7, sizeof(melodia7) / sizeof(melodia7[0])},
      {"Doorbell", melodia8, sizeof(melodia8) / sizeof(melodia8[0])},
      {"Police Siren", melodia9, sizeof(melodia9) / sizeof(melodia9[0])},
      {"Classic Phone", melodia10, sizeof(melodia10) / sizeof(melodia10[0])}
    };

    // Variables de control
    uint32_t lastToneTime = 0;
    int currentNoteIndex = 0;
    bool isPlaying = false;
    int melodiaActual = 0;
    int pinTone;
    int pinLed;

  public:
    Melody(int pin_tone = PIN_TONE_OUTPUT, int pin_led = LED_BUILTIN) {
      pinTone = pin_tone;
      pinLed = pin_led;
    }

    void setup() {
      pinMode(pinTone, OUTPUT);
      pinMode(pinLed, OUTPUT);
      stop();
      for(uint8_t pin=2;pin <= 9; pin++){
        pinMode(pin, OUTPUT);  
      }
    }

    void play(uint8_t user, uint8_t indice) {     
      if (indice >= 0 && indice < AVAILABLE_MELODIES) {
        Serial.print("Playing tone: ");
        Serial.print(melodias[indice].nombre); 
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
      return &melodias[melodiaActual];
    }

    bool getIsPlaying() {
      return isPlaying;
    }

    void beep(){
      tone(pinTone, NOTE_B5, 80);
    }

    void confirmation(){
      noTone(pinTone);
      tone(pinTone, NOTE_A5, 100);
      delay(100);
      tone(pinTone, NOTE_A4, 200);
      delay(200);  
    }

    void warn(){
      tone(pinTone, NOTE_E5, 80);
    }

   void stop() {
      isPlaying = false;
      noTone(pinTone);
      currentNoteIndex = 0;
      for(uint8_t pin=2;pin <= 9; pin++){
        digitalWrite(pin, LOW);  
      }
    }

    void loop() {
      if (!isPlaying) {
        return;
      }

      uint32_t currentTime = millis();
      MelodyScore* melodiaActiva = &melodias[melodiaActual];

      if (currentTime - lastToneTime >= melodiaActiva->notas[currentNoteIndex].duracion + 50) {
        noTone(pinTone);

        currentNoteIndex++;

        if (currentNoteIndex >= melodiaActiva->numeroNotas) {
          stop();
          return;
        }

        if (melodiaActiva->notas[currentNoteIndex].frecuencia > 0) {
          tone(pinTone, melodiaActiva->notas[currentNoteIndex].frecuencia);
        }

        lastToneTime = currentTime;
        digitalWrite(pinLed, !digitalRead(pinLed));
      }
    }
};

#define TONE_DELAY 100

// Definición de las notas musicales en Hz
#define NOTE_E5  659
#define NOTE_DS5 622
#define NOTE_E4  330
#define NOTE_DS4 311
#define NOTE_B4  494
#define NOTE_D5  587
#define NOTE_C5  523
#define NOTE_A4  440

#define PIN_TONE_OUTPUT 12


// Estructura para almacenar la melodía
struct Nota {
  int frecuencia;
  int duracion;
};


// Melodía: Für Elise (simplificada)
Nota melodia[] = {
  {NOTE_E5, 150},
  {NOTE_DS5, 150},
  {NOTE_E5, 150},
  {NOTE_DS5, 150},
  {NOTE_E5, 150},
  {NOTE_B4, 150},
  {NOTE_D5, 150},
  {NOTE_C5, 150},
  {NOTE_A4, 300},
  {0, 150},      // Silencio
  {NOTE_E4, 150},
  {NOTE_B4, 150},
  {NOTE_C5, 150},
  {NOTE_A4, 300},
  {0, 150},      // Silencio
  {NOTE_B4, 150},
  {NOTE_C5, 150},
  {NOTE_A4, 150},
  {NOTE_E4, 300},
};

// Variables para el control de tiempo
uint32_t lastToneTime = 0;
int currentNoteIndex = 0;
bool isPlaying = false;
const int numeroNotas = sizeof(melodia) / sizeof(melodia[0]);

void setupMelody(){
  pinMode(PIN_TONE_OUTPUT, OUTPUT); // Configurar el pin 12 como salida
  pinMode(LED_BUILTIN, OUTPUT);
}

void iniciarMelodia() {
  isPlaying = true;
  currentNoteIndex = 0;
  lastToneTime = millis();
}

void reproducirMelodiaNoBloqueante() {
  if (!isPlaying) {
    iniciarMelodia();
    return;
  }

  uint32_t currentTime = millis();
  
  // Verificar si es tiempo de tocar la siguiente nota
  if (currentTime - lastToneTime >= melodia[currentNoteIndex].duracion + 50) { // +50ms entre notas
    // Detener la nota anterior
    noTone(PIN_TONE_OUTPUT);
    
    // Pasar a la siguiente nota
    currentNoteIndex++;
    
    // Si llegamos al final de la melodía
    if (currentNoteIndex >= numeroNotas) {
      isPlaying = false;
      currentNoteIndex = 0;
      //delay(2000); // Pausa entre repeticiones
      return;
    }
    
    // Reproducir la nueva nota
    if (melodia[currentNoteIndex].frecuencia > 0) {
      tone(PIN_TONE_OUTPUT, melodia[currentNoteIndex].frecuencia);
    }
    
    lastToneTime = currentTime;
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN)); // Toggle LED como indicador
  }
}

// Función opcional para detener la melodía
void detenerMelodia() {
  isPlaying = false;
  noTone(PIN_TONE_OUTPUT);
  currentNoteIndex = 0;
}

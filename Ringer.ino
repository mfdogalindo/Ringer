#include "Keyboard.h"
#include "Melody.h"


void setup() {
  Serial.begin(9600); // Inicializar comunicación Serial
  setupMelody();
  setupKeyboard();
}

void loop() {

  int kb = readKeyboard();

  if(kb > 0){
    Serial.print("Tecla: ");
    Serial.println(kb);  
  }

  // Emitir tono continuo con patrón de "ringer elegante"
  reproducirMelodiaNoBloqueante();
}

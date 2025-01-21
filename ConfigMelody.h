#include "Arduino.h"
#include <EEPROM.h>


class ConfigMelody {
  private:
    uint8_t melodiesSelected[MAX_POSITIONS] = {0, 0, 0, 0, 0, 0, 0, 0};

  public:
    ConfigMelody() {
      refresh();
    }

    uint8_t get(uint8_t position) {
      Serial.print("Search value: ");
      Serial.print(position);
      Serial.print(" Result: ");
      Serial.println(melodiesSelected[position]);

      return melodiesSelected[position];
    }

    void print() {
      Serial.print("Melody Config: ");
      for (uint8_t i = 0; i < MAX_POSITIONS; i++) {
        Serial.print(melodiesSelected[i]);
        Serial.print("\t");
      }
      Serial.println();
    }

    void refresh() {
      for (uint8_t i = 0; i < MAX_POSITIONS; i++) {
        uint8_t curr = EEPROM.read(i);
        curr = curr > AVAILABLE_MELODIES ? 0 : curr;
        melodiesSelected[i] = curr;
      }
    }

    void update(uint8_t position, uint8_t value, const char* name) {
      EEPROM.update(position, value);
      Serial.print("Melody updated: ");
      Serial.print(name);
      Serial.print("for user: ");
      Serial.println(position);
      melodiesSelected[position] = value;
      print();
    }

};

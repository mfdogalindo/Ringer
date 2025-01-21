// Scores.h

#include <avr/pgmspace.h>

#define AVAILABLE_MELODIES 30


// Octave 1
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

// Octave 2
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

// Octave 3
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

// Octave 4
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

// Octave 5
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

// Octave 6
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976

// Octave 7
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951

// Structure to store a musical note
struct Note {
  int frequency;
  int duration;
};

// Structure to store a complete melody
struct MelodyScore {
  const char* name;
  Note* notes;
  int noteCount;
};



// 1. Für Elise - Beethoven (Main theme, more complete)
const Note melody1[] PROGMEM = {
  {NOTE_E5, 150}, {NOTE_DS5, 150}, {NOTE_E5, 150}, {NOTE_DS5, 150}, {NOTE_E5, 150},
  {NOTE_B4, 150}, {NOTE_D5, 150}, {NOTE_C5, 150}, {NOTE_A4, 400}, {0, 150},
  {NOTE_C4, 150}, {NOTE_E4, 150}, {NOTE_A4, 150}, {NOTE_B4, 400}, {0, 150},
  {NOTE_E4, 150}, {NOTE_GS4, 150}, {NOTE_B4, 150}, {NOTE_C5, 400}, {0, 150},
  {NOTE_E5, 150}, {NOTE_DS5, 150}, {NOTE_E5, 150}, {NOTE_DS5, 150}, {NOTE_E5, 150},
  {NOTE_B4, 150}, {NOTE_D5, 150}, {NOTE_C5, 150}, {NOTE_A4, 400}
};

// 2. Symphony No. 5 - Beethoven (Famous opening and continuation)
const Note melody2[] PROGMEM = {
  {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_DS4, 450}, {0, 150},
  {NOTE_F4, 150}, {NOTE_F4, 150}, {NOTE_F4, 150}, {NOTE_D4, 450}, {0, 150},
  {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_DS4, 450}, {0, 150},
  {NOTE_F4, 150}, {NOTE_F4, 150}, {NOTE_F4, 150}, {NOTE_D4, 450}, {0, 150},
  {NOTE_G4, 300}, {NOTE_DS4, 300}, {NOTE_F4, 300}, {NOTE_D4, 300}
};

// 3. Eine Kleine Nachtmusik - Mozart (Main theme extended)
const Note melody3[] PROGMEM = {
  {NOTE_G4, 200}, {NOTE_D4, 200}, {NOTE_G4, 200}, {NOTE_G4, 200},
  {NOTE_D5, 200}, {NOTE_D5, 200}, {NOTE_G4, 400}, {0, 200},
  {NOTE_G4, 200}, {NOTE_D5, 200}, {NOTE_D5, 200}, {NOTE_G4, 200},
  {NOTE_G4, 200}, {NOTE_D4, 200}, {NOTE_G4, 400}, {0, 200},
  {NOTE_C5, 200}, {NOTE_D5, 200}, {NOTE_C5, 200}, {NOTE_B4, 200},
  {NOTE_A4, 200}, {NOTE_B4, 200}, {NOTE_C5, 400}
};

// 4. Ode to Joy - Beethoven (Extended theme)
const Note melody4[] PROGMEM = {
  {NOTE_E4, 200}, {NOTE_E4, 200}, {NOTE_F4, 200}, {NOTE_G4, 200},
  {NOTE_G4, 200}, {NOTE_F4, 200}, {NOTE_E4, 200}, {NOTE_D4, 200},
  {NOTE_C4, 200}, {NOTE_C4, 200}, {NOTE_D4, 200}, {NOTE_E4, 200},
  {NOTE_E4, 300}, {NOTE_D4, 100}, {NOTE_D4, 400}, {0, 200},
  {NOTE_E4, 200}, {NOTE_E4, 200}, {NOTE_F4, 200}, {NOTE_G4, 200},
  {NOTE_G4, 200}, {NOTE_F4, 200}, {NOTE_E4, 200}, {NOTE_D4, 200},
  {NOTE_C4, 200}, {NOTE_C4, 200}, {NOTE_D4, 200}, {NOTE_E4, 200},
  {NOTE_D4, 300}, {NOTE_C4, 100}, {NOTE_C4, 400}
};

// 5. Swan Lake Theme - Tchaikovsky
const Note melody5[] PROGMEM = {
  {NOTE_B4, 300}, {NOTE_E5, 150}, {NOTE_D5, 150}, {NOTE_C5, 300},
  {NOTE_B4, 150}, {NOTE_C5, 150}, {NOTE_A4, 300}, {0, 150},
  {NOTE_C5, 300}, {NOTE_B4, 150}, {NOTE_A4, 150}, {NOTE_G4, 300},
  {NOTE_E4, 450}, {0, 150}, {NOTE_E5, 300}, {NOTE_D5, 150},
  {NOTE_C5, 150}, {NOTE_B4, 300}, {NOTE_A4, 150}, {NOTE_G4, 150},
  {NOTE_A4, 600}
};

// 6. The Four Seasons (Spring) - Vivaldi
const Note melody6[] PROGMEM = {
  {NOTE_E5, 150}, {NOTE_E5, 150}, {NOTE_E5, 150}, {NOTE_E5, 400},
  {NOTE_D5, 150}, {NOTE_D5, 150}, {NOTE_D5, 150}, {NOTE_D5, 400},
  {NOTE_C5, 150}, {NOTE_C5, 150}, {NOTE_C5, 150}, {NOTE_C5, 400},
  {NOTE_B4, 150}, {NOTE_B4, 150}, {NOTE_B4, 150}, {NOTE_B4, 400},
  {NOTE_A4, 600}, {NOTE_B4, 600}, {NOTE_C5, 600}, {NOTE_D5, 600},
  {NOTE_E5, 150}, {NOTE_E5, 150}, {NOTE_E5, 150}, {NOTE_E5, 400}
};

// 7. In the Hall of the Mountain King - Grieg
const Note melody7[] PROGMEM = {
  {NOTE_A4, 150}, {NOTE_B4, 150}, {NOTE_C5, 150}, {NOTE_D5, 150},
  {NOTE_E5, 150}, {NOTE_C5, 150}, {NOTE_E5, 300}, {0, 150},
  {NOTE_B4, 150}, {NOTE_C5, 150}, {NOTE_D5, 150}, {NOTE_E5, 150},
  {NOTE_F5, 150}, {NOTE_D5, 150}, {NOTE_F5, 300}, {0, 150},
  {NOTE_C5, 150}, {NOTE_D5, 150}, {NOTE_E5, 150}, {NOTE_F5, 150},
  {NOTE_G5, 150}, {NOTE_E5, 150}, {NOTE_G5, 300}
};

// 8. William Tell Overture - Rossini
const Note melody8[] PROGMEM = {
  {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_G4, 150},
  {NOTE_C5, 600}, {0, 150}, {NOTE_G4, 150}, {NOTE_G4, 150},
  {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_E5, 600}, {0, 150},
  {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_G4, 150},
  {NOTE_C5, 150}, {NOTE_C5, 150}, {NOTE_C5, 150}, {NOTE_C5, 150},
  {NOTE_G4, 600}
};

// 9. Blue Danube Waltz - Strauss II
const Note melody9[] PROGMEM = {
  {NOTE_D4, 300}, {NOTE_FS4, 300}, {NOTE_A4, 300}, {NOTE_D5, 300},
  {NOTE_E5, 450}, {NOTE_FS5, 150}, {NOTE_G5, 600}, {0, 300},
  {NOTE_FS5, 300}, {NOTE_D5, 300}, {NOTE_A4, 300}, {NOTE_FS4, 300},
  {NOTE_G4, 450}, {NOTE_E4, 150}, {NOTE_D4, 600}, {0, 300},
  {NOTE_D5, 300}, {NOTE_FS5, 300}, {NOTE_A5, 300}, {NOTE_G5, 300},
  {NOTE_FS5, 600}
};

// 10. Toccata and Fugue in D minor - Bach
const Note melody10[] PROGMEM = {
  {NOTE_D4, 200}, {NOTE_A4, 200}, {NOTE_D5, 400}, {0, 200},
  {NOTE_D4, 200}, {NOTE_A4, 200}, {NOTE_D5, 400}, {0, 200},
  {NOTE_C5, 200}, {NOTE_F4, 200}, {NOTE_C5, 400}, {0, 200},
  {NOTE_B4, 200}, {NOTE_G4, 200}, {NOTE_D5, 400}, {0, 200},
  {NOTE_C5, 200}, {NOTE_A4, 200}, {NOTE_E5, 400}, {0, 200},
  {NOTE_D5, 600}
};

// Popular Music Melodies (indices 11-20)

// 1. Super Mario Bros Theme
const Note melody11[] PROGMEM = {
  {NOTE_E5, 150}, {NOTE_E5, 150}, {0, 150}, {NOTE_E5, 150},
  {0, 150}, {NOTE_C5, 150}, {NOTE_E5, 150}, {0, 150},
  {NOTE_G5, 150}, {0, 450}, {NOTE_G4, 150}, {0, 300},
  {NOTE_C5, 150}, {0, 300}, {NOTE_G4, 150},
  {0, 300}, {NOTE_E4, 150}, {0, 300},
  {NOTE_A4, 150}, {0, 150}, {NOTE_B4, 150}, {0, 150},
  {NOTE_AS4, 150}, {NOTE_A4, 150}, {0, 150},
  {NOTE_G4, 150}, {NOTE_E5, 150}, {NOTE_G5, 150},
  {NOTE_A5, 150}, {0, 150}, {NOTE_F5, 150}, {NOTE_G5, 150},
  {0, 150}, {NOTE_E5, 150}, {0, 150}, {NOTE_C5, 150},
  {NOTE_D5, 150}, {NOTE_B4, 150}, {0, 300}
};

// 2. Tetris Theme A (Korobeiniki)
const Note melody12[] PROGMEM = {
  {NOTE_E5, 150}, {NOTE_B4, 75}, {NOTE_C5, 75}, {NOTE_D5, 150},
  {NOTE_C5, 75}, {NOTE_B4, 75}, {NOTE_A4, 150}, {NOTE_A4, 75},
  {NOTE_C5, 75}, {NOTE_E5, 150}, {NOTE_D5, 75}, {NOTE_C5, 75},
  {NOTE_B4, 150}, {NOTE_B4, 75}, {NOTE_C5, 75}, {NOTE_D5, 150},
  {NOTE_E5, 150}, {NOTE_C5, 150}, {NOTE_A4, 150}, {NOTE_A4, 150},
  {0, 150}, {NOTE_D5, 150}, {NOTE_F5, 75}, {NOTE_A5, 150},
  {NOTE_G5, 75}, {NOTE_F5, 75}, {NOTE_E5, 150}, {NOTE_C5, 75},
  {NOTE_E5, 150}, {NOTE_D5, 75}, {NOTE_C5, 75}, {NOTE_B4, 150},
  {NOTE_B4, 75}, {NOTE_C5, 75}, {NOTE_D5, 150}, {NOTE_E5, 150},
  {NOTE_C5, 150}, {NOTE_A4, 150}, {NOTE_A4, 150}, {0, 150}
};

// 3. Star Wars Imperial March
const Note melody13[] PROGMEM = {
  {NOTE_G4, 300}, {NOTE_G4, 300}, {NOTE_G4, 300},
  {NOTE_DS4, 225}, {NOTE_AS4, 75}, {NOTE_G4, 300},
  {NOTE_DS4, 225}, {NOTE_AS4, 75}, {NOTE_G4, 600},
  {NOTE_D5, 300}, {NOTE_D5, 300}, {NOTE_D5, 300},
  {NOTE_DS5, 225}, {NOTE_AS4, 75}, {NOTE_FS4, 300},
  {NOTE_DS4, 225}, {NOTE_AS4, 75}, {NOTE_G4, 600},
  {NOTE_G5, 300}, {NOTE_G4, 225}, {NOTE_G4, 75},
  {NOTE_G5, 300}, {NOTE_FS5, 225}, {NOTE_F5, 75},
  {NOTE_E5, 75}, {NOTE_DS5, 75}, {NOTE_E5, 150}
};

// 4. The Legend of Zelda Main Theme
const Note melody14[] PROGMEM = {
  {NOTE_AS4, 150}, {NOTE_F4, 150}, {NOTE_AS4, 300},
  {NOTE_AS4, 150}, {NOTE_C5, 150}, {NOTE_D5, 150}, {NOTE_DS5, 150},
  {NOTE_F5, 600}, {NOTE_F5, 150}, {NOTE_F5, 150},
  {NOTE_F5, 150}, {NOTE_FS5, 150}, {NOTE_GS5, 150}, {NOTE_AS5, 150},
  {NOTE_C6, 600}, {NOTE_AS5, 150}, {NOTE_AS5, 150},
  {NOTE_AS5, 150}, {NOTE_GS5, 150}, {NOTE_FS5, 150}, {NOTE_GS5, 150},
  {NOTE_AS5, 600}, {NOTE_F5, 150}, {NOTE_F5, 150},
  {NOTE_F5, 150}, {NOTE_DS5, 150}, {NOTE_CS5, 150}, {NOTE_DS5, 150}
};

// 5. Smoke on the Water - Deep Purple
const Note melody15[] PROGMEM = {
  {NOTE_G4, 300}, {NOTE_AS4, 300}, {NOTE_C5, 300},
  {NOTE_G4, 300}, {NOTE_AS4, 300}, {NOTE_CS5, 300}, {NOTE_C5, 300},
  {NOTE_G4, 300}, {NOTE_AS4, 300}, {NOTE_C5, 300},
  {NOTE_AS4, 300}, {NOTE_G4, 600}, {0, 300},
  {NOTE_G4, 300}, {NOTE_AS4, 300}, {NOTE_C5, 300},
  {NOTE_G4, 300}, {NOTE_AS4, 300}, {NOTE_CS5, 300}, {NOTE_C5, 300},
  {NOTE_G4, 300}, {NOTE_AS4, 300}, {NOTE_C5, 300},
  {NOTE_AS4, 300}, {NOTE_G4, 600}
};

// 6. Seven Nation Army - The White Stripes
const Note melody16[] PROGMEM = {
  {NOTE_E4, 450}, {0, 50}, {NOTE_E4, 150}, {NOTE_G4, 150},
  {NOTE_E4, 150}, {NOTE_D4, 450}, {0, 150},
  {NOTE_C4, 600}, {NOTE_B3, 600}, {0, 150},
  {NOTE_E4, 450}, {0, 50}, {NOTE_E4, 150}, {NOTE_G4, 150},
  {NOTE_E4, 150}, {NOTE_D4, 450}, {0, 150},
  {NOTE_C4, 300}, {NOTE_D4, 300}, {NOTE_C4, 300}, {NOTE_B3, 600}
};

// 7. Pokemon Theme
const Note melody17[] PROGMEM = {
  {NOTE_D5, 150}, {NOTE_D5, 150}, {NOTE_D5, 150}, {NOTE_D5, 450},
  {NOTE_B4, 300}, {NOTE_G4, 300}, {NOTE_D5, 300},
  {NOTE_C5, 600}, {NOTE_E5, 600},
  {NOTE_D5, 150}, {NOTE_D5, 150}, {NOTE_D5, 150}, {NOTE_D5, 450},
  {NOTE_B4, 300}, {NOTE_G4, 300}, {NOTE_D5, 300},
  {NOTE_C5, 300}, {NOTE_E5, 300}, {NOTE_C5, 600}
};

// 8. Final Fantasy Victory Fanfare
const Note melody18[] PROGMEM = {
  {NOTE_C5, 150}, {NOTE_C5, 150}, {NOTE_C5, 150}, {NOTE_C5, 450},
  {NOTE_GS4, 600}, {NOTE_AS4, 600},
  {NOTE_C5, 150}, {NOTE_AS4, 150}, {NOTE_C5, 900},
  {0, 150}, {NOTE_F5, 150}, {NOTE_F5, 150}, {NOTE_F5, 150},
  {NOTE_F5, 150}, {NOTE_F5, 150}, {NOTE_DS5, 600},
  {NOTE_F5, 600}, {NOTE_C5, 1200}
};

// 9. Sweet Child O' Mine - Guns N' Roses (Opening Riff)
const Note melody19[] PROGMEM = {
  {NOTE_D5, 150}, {NOTE_D5, 150}, {NOTE_A4, 150}, {NOTE_G4, 150},
  {NOTE_G4, 150}, {NOTE_A4, 150}, {NOTE_D5, 150}, {NOTE_D5, 150},
  {NOTE_A4, 150}, {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_A4, 150},
  {NOTE_D5, 150}, {NOTE_D5, 150}, {NOTE_A4, 150}, {NOTE_G4, 150},
  {NOTE_G4, 150}, {NOTE_E5, 150}, {NOTE_D5, 150}, {NOTE_D5, 150},
  {NOTE_A4, 150}, {NOTE_G4, 150}, {NOTE_G4, 150}, {NOTE_A4, 150}
};

// 10. Sonic the Hedgehog - Green Hill Zone
const Note melody20[] PROGMEM = {
  {NOTE_E4, 150}, {NOTE_G4, 150}, {NOTE_A4, 150}, {NOTE_B4, 150},
  {NOTE_C5, 150}, {NOTE_D5, 150}, {NOTE_E5, 300},
  {NOTE_G4, 150}, {NOTE_A4, 150}, {NOTE_B4, 150}, {NOTE_C5, 150},
  {NOTE_D5, 150}, {NOTE_E5, 150}, {NOTE_F5, 300},
  {NOTE_E5, 150}, {NOTE_D5, 150}, {NOTE_C5, 150}, {NOTE_B4, 150},
  {NOTE_A4, 150}, {NOTE_G4, 150}, {NOTE_A4, 150}, {NOTE_B4, 150},
  {NOTE_C5, 150}, {NOTE_D5, 150}, {NOTE_E5, 150}, {NOTE_F5, 150},
  {NOTE_G5, 600}
};


// Basic Monophonic Tones (indices 21-30)

// 1. Classic Nokia Ringtone (Gran Vals)
const Note melody21[] PROGMEM = {
  {NOTE_E5, 150}, {NOTE_D5, 150}, {NOTE_FS4, 300}, {NOTE_GS4, 300},
  {NOTE_CS5, 150}, {NOTE_B4, 150}, {NOTE_D4, 300}, {NOTE_E4, 300},
  {NOTE_B4, 150}, {NOTE_A4, 150}, {NOTE_CS4, 300}, {NOTE_E4, 300},
  {NOTE_A4, 600}, {0, 300},
  {NOTE_E5, 150}, {NOTE_D5, 150}, {NOTE_FS4, 300}, {NOTE_GS4, 300},
  {NOTE_CS5, 150}, {NOTE_B4, 150}, {NOTE_D4, 300}, {NOTE_E4, 300}
};

// 2. Message Notification
const Note melody22[] PROGMEM = {
  {NOTE_C6, 100}, {0, 50},
  {NOTE_E6, 100}, {0, 50},
  {NOTE_G6, 150}, {0, 50},
  {NOTE_C7, 300}, {0, 100},
  // Repeat softer
  {NOTE_C6, 80}, {0, 50},
  {NOTE_E6, 80}, {0, 50},
  {NOTE_G6, 100}, {0, 50},
  {NOTE_C7, 200}
};

// 3. Error Alert
const Note melody23[] PROGMEM = {
  {NOTE_B5, 100}, {0, 50},
  {NOTE_B4, 100}, {0, 50},
  {NOTE_B5, 100}, {0, 50},
  {NOTE_B4, 100}, {0, 50},
  {NOTE_B5, 100}, {NOTE_B4, 300},
  {0, 200},
  {NOTE_B5, 800}
};

// 4. Success Chime
const Note melody24[] PROGMEM = {
  {NOTE_C5, 150}, {NOTE_E5, 150}, {NOTE_G5, 150},
  {NOTE_C6, 300}, {0, 100},
  {NOTE_G5, 100}, {NOTE_C6, 500},
  {0, 200},
  // Final confirmation
  {NOTE_C6, 150}, {NOTE_D6, 150}, {NOTE_E6, 300}
};

// 5. Warning Alert
const Note melody25[] PROGMEM = {
  {NOTE_G5, 150}, {0, 50},
  {NOTE_G5, 150}, {0, 100},
  {NOTE_G5, 150}, {0, 50},
  {NOTE_G5, 150}, {0, 100},
  {NOTE_G5, 150}, {NOTE_FS5, 150}, {NOTE_F5, 500},
  {0, 200},
  {NOTE_G5, 150}, {NOTE_FS5, 150}, {NOTE_F5, 500}
};

// 6. Doorbell Melody
const Note melody26[] PROGMEM = {
  {NOTE_E5, 200}, {NOTE_C5, 400}, {0, 200},
  {NOTE_E5, 200}, {NOTE_C5, 400}, {0, 200},
  {NOTE_E5, 200}, {NOTE_C5, 400}, {0, 200},
  {NOTE_E5, 200}, {NOTE_C5, 600},
  // Final chime
  {NOTE_G5, 200}, {NOTE_E5, 800}
};

// 7. Low Battery Warning
const Note melody27[] PROGMEM = {
  {NOTE_C4, 300}, {0, 100},
  {NOTE_B3, 300}, {0, 100},
  {NOTE_AS3, 600}, {0, 200},
  // Repeat with longer duration
  {NOTE_C4, 400}, {0, 100},
  {NOTE_B3, 400}, {0, 100},
  {NOTE_AS3, 800}
};

// 8. Calendar Reminder
const Note melody28[] PROGMEM = {
  {NOTE_A5, 100}, {NOTE_C6, 100}, {0, 50},
  {NOTE_A5, 100}, {NOTE_C6, 100}, {0, 50},
  {NOTE_A5, 100}, {NOTE_C6, 100}, {0, 100},
  {NOTE_E6, 400}, {0, 100},
  // Final reminder
  {NOTE_A5, 100}, {NOTE_C6, 100}, {NOTE_E6, 600}
};

// 9. Clock Alarm
const Note melody29[] PROGMEM = {
  {NOTE_C6, 150}, {NOTE_G5, 150}, {NOTE_C6, 150}, {0, 100},
  {NOTE_C6, 150}, {NOTE_G5, 150}, {NOTE_C6, 150}, {0, 200},
  {NOTE_C6, 150}, {NOTE_G5, 150}, {NOTE_C6, 150}, {0, 100},
  {NOTE_C6, 150}, {NOTE_G5, 150}, {NOTE_C6, 150}, {0, 200},
  // Increase intensity
  {NOTE_D6, 150}, {NOTE_A5, 150}, {NOTE_D6, 150}, {0, 100},
  {NOTE_D6, 150}, {NOTE_A5, 150}, {NOTE_D6, 600}
};

// 10. Phone Ringtone (Modern)
const Note melody30[] PROGMEM = {
  {NOTE_E6, 200}, {NOTE_A5, 200}, {NOTE_E6, 200}, {NOTE_A5, 200},
  {0, 200},
  {NOTE_E6, 200}, {NOTE_A5, 200}, {NOTE_E6, 200}, {NOTE_A5, 200},
  {0, 200},
  {NOTE_F6, 200}, {NOTE_A5, 200}, {NOTE_F6, 200}, {NOTE_A5, 200},
  {0, 200},
  {NOTE_G6, 200}, {NOTE_B5, 200}, {NOTE_G6, 200}, {NOTE_B5, 400}
};

const MelodyScore melodies[] PROGMEM = {
  {"Fur Elise", melody1, sizeof(melody1) / sizeof(melody1[0])},
  {"Symphony No 5", melody2, sizeof(melody2) / sizeof(melody2[0])},
  {"Eine Kleine Nachtmusik", melody3, sizeof(melody3) / sizeof(melody3[0])},
  {"Ode to Joy", melody4, sizeof(melody4) / sizeof(melody4[0])},
  {"Swan Lake", melody5, sizeof(melody5) / sizeof(melody5[0])},
  {"Four Seasons - Spring", melody6, sizeof(melody6) / sizeof(melody6[0])},
  {"Mountain King", melody7, sizeof(melody7) / sizeof(melody7[0])},
  {"William Tell", melody8, sizeof(melody8) / sizeof(melody8[0])},
  {"Blue Danube", melody9, sizeof(melody9) / sizeof(melody9[0])},
  {"Toccata and Fugue", melody10, sizeof(melody10) / sizeof(melody10[0])},
  {"Super Mario", melody11, sizeof(melody11) / sizeof(melody11[0])},
  {"Tetris", melody12, sizeof(melody12) / sizeof(melody12[0])},
  {"Imperial March", melody13, sizeof(melody13) / sizeof(melody13[0])},
  {"Zelda", melody14, sizeof(melody14) / sizeof(melody14[0])},
  {"Smoke on Water", melody15, sizeof(melody15) / sizeof(melody15[0])},
  {"Seven Nation", melody16, sizeof(melody16) / sizeof(melody16[0])},
  {"Pokemon", melody17, sizeof(melody17) / sizeof(melody17[0])},
  {"Final Fantasy", melody18, sizeof(melody18) / sizeof(melody18[0])},
  {"Sweet Child", melody19, sizeof(melody19) / sizeof(melody19[0])},
  {"Sonic", melody20, sizeof(melody20) / sizeof(melody20[0])},
  {"Nokia Classic", melody21, sizeof(melody21) / sizeof(melody21[0])},
  {"Message", melody22, sizeof(melody22) / sizeof(melody22[0])},
  {"Error", melody23, sizeof(melody23) / sizeof(melody23[0])},
  {"Success", melody24, sizeof(melody24) / sizeof(melody24[0])},
  {"Warning", melody25, sizeof(melody25) / sizeof(melody25[0])},
  {"Doorbell", melody26, sizeof(melody26) / sizeof(melody26[0])},
  {"Low Battery", melody27, sizeof(melody27) / sizeof(melody27[0])},
  {"Calendar", melody28, sizeof(melody28) / sizeof(melody28[0])},
  {"Alarm", melody29, sizeof(melody29) / sizeof(melody29[0])},
  {"Modern Ring", melody30, sizeof(melody30) / sizeof(melody30[0])}
};

// Helper function to read a note from PROGMEM
inline void readNoteFromPROGMEM(const Note* progmemNote, Note& ramNote) {
  memcpy_P(&ramNote, progmemNote, sizeof(Note));
}

// Helper function to read melody metadata from PROGMEM
inline void readMelodyMetadataFromPROGMEM(const MelodyScore* progmemScore, MelodyScore& ramScore) {
  memcpy_P(&ramScore, progmemScore, sizeof(MelodyScore));
}

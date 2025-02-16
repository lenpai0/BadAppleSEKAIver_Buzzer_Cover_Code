/*
  Melody
  Plays a melody

  circuit:

  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010

  modified 30 Aug 2011

  by Tom Igoe
  
  This example code is in the public domain.
  https://www.arduino.cc/en/Tutorial/Tone

  Another code referenced for dotted note logic by Robson Couto
  https://github.com/robsoncouto/arduino-songs
*/

/*
  MODIFIED

  BadAppleSEKAIver

  Github instruction: https://github.com/lenpai0/BadAppleSEKAIver_Buzzer_Cover_Code/

  Song: Bad Apple!!feat.SEKAI by Nightcord at 25:00 https://www.youtube.com/watch?v=v-fc1zv31zE
  Piano cover reference by @Sapphire_Titech used: https://www.youtube.com/watch?v=VVsgW76z00o

  This is a modified program from my most popular TikTok video. This code should work for any Arduino board.
  When uploaded, it will simply play the whole main melody of Bad Apple. 
  
  Press the RESET button on the arduino board to have the song play again. Enjoy!

  by Lenpai (YouTube: https://www.youtube.com/@lenpai0 | TikTok: https://www.tiktok.com/@lenpai0)

*/

//OUTPUT
#define BUZZERPIN 8  //you can change this to any GPIO pin

//defines you can safely ignore
#define REST 0
#define B0 31
#define C1 33
#define CS1 35
#define D1 37
#define DS1 39
#define E1 41
#define F1 44
#define FS1 46
#define G1 49
#define GS1 52
#define A1 55
#define AS1 58
#define B1 62
#define C2 65
#define CS2 69
#define D2 73
#define DS2 78
#define E2 82
#define F2 87
#define FS2 93
#define G2 98
#define GS2 104
#define A2 110
#define AS2 117
#define B2 123
#define C3 131
#define CS3 139
#define D3 147
#define DS3 156
#define E3 165
#define F3 175
#define FS3 185
#define G3 196
#define GS3 208
#define A3 220
#define AS3 233
#define B3 247
#define C4 262
#define CS4 277
#define D4 294
#define DS4 311
#define E4 330
#define F4 349
#define FS4 370
#define G4 392
#define GS4 415
#define A4 440
#define AS4 466
#define B4 494
#define C5 523
#define CS5 554
#define D5 587
#define DS5 622
#define E5 659
#define F5 698
#define FS5 740
#define G5 784
#define GS5 831
#define A5 880
#define AS5 932
#define B5 988
#define C6 1047
#define CS6 1109
#define D6 1175
#define DS6 1245
#define E6 1319
#define F6 1397
#define FS6 1480
#define G6 1568
#define GS6 1661
#define A6 1760
#define AS6 1865
#define B6 1976
#define C7 2093
#define CS7 2217
#define D7 2349
#define DS7 2489
#define E7 2637
#define F7 2794
#define FS7 2960
#define G7 3136
#define GS7 3322
#define A7 3520
#define AS7 3729
#define B7 3951
#define C8 4186
#define CS8 4435
#define D8 4699
#define DS8 4978


//tempo is 138 for bad apple!!feat.SEKAI
int tempo = 138;

// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
int wholenote = (60000 * 4) / tempo;

const int mainMelody[] PROGMEM = {

  //beginning melody
  C4, D4, DS4, F4, G4, REST, C5, AS4, G4, C4, G4, F4, DS4, D4, C4, D4, DS4, F4, G4,  // beginning
  F4, DS4, D4, C4, D4, DS4, D4, C4, B3, D4, C4, D4, DS4, F4, G4, REST, C5, AS4, G4, C4, G4,
  F4, DS4, D4, C4, D4, DS4, F4, G4, F4, DS4, D4, REST, DS4, F4, REST, G4, C5, D5, DS5, F5,
  G5, C6, AS5, G5, C5, G5, F5, DS5, D5, C5, D5, DS5, F5, G5, F5, DS5, D5, C5, D5, DS5, D5,
  C5, B4, D5, C5, D5, DS5, F5, G5, C6, AS5, G5, C5, G5, F5, DS5, D5, C5, D5, DS5, F5, G5,
  F5, DS5, D5, REST, DS5, F5, G5,

  //chorus
  AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,  //chorus
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, C6, D6, DS6, D6, C6, AS5, G5, F5, G5, F5, DS5, D5, AS4, C5,
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, C6, D6, DS6, D6, C6, AS5, G5, F5, G5, F5, DS5, D5, AS4, C5,
  REST,

  //after chorus
  C6, AS5, C6, C6, AS5, C6, C6, AS5, C6, C6, AS5, C6, AS5, C6, AS5, C6, AS5, C6, DS6, C6,
  AS5, C6, C6, C6, REST, C4, DS4, F4, G4, FS4, G4, FS4, FS4, F4, F4, DS4,
  AS3, REST, DS4, REST, C4, C5,
  C6, C5, AS5, C5, G5, C5, FS5, C5, F5, C5, DS5,
  AS4, C5, DS5, DS5, C5, AS4, DS5, DS5, C5, AS4, DS5, F5, REST, DS5, AS4,
  //sure what the hell
  C5, G4, AS4, C5, DS5, G4, AS4, C5, DS5, F5, AS4, C5, DS5, F5, G5, C5, DS5, F5, G5,
  AS5, C5, DS5, F5, AS5, C6, F5, G5, AS5, C6, DS6, G5, AS5, C6, DS6, G6, C7, DS7, G7,
  REST,  //REST, //extra rest note

  //copy paste from beginning
  C4, D4, DS4, F4, G4, REST, C5, AS4, G4, C4, G4, F4, DS4, D4, C4, D4, DS4, F4, G4,  // beginning
  F4, DS4, D4, C4, D4, DS4, D4, C4, B3, D4, C4, D4, DS4, F4, G4, REST, C5, AS4, G4, C4, G4,
  F4, DS4, D4, C4, D4, DS4, F4, G4, F4, DS4, D4, REST, DS4, F4, REST, G4, C5, D5, DS5, F5,
  G5, C6, AS5, G5, C5, G5, F5, DS5, D5, C5, D5, DS5, F5, G5, F5, DS5, D5, C5, D5, DS5, D5,
  C5, B4, D5, C5, D5, DS5, F5, G5, C6, AS5, G5, C5, G5, F5, DS5, D5, C5, D5, DS5, F5, G5,
  F5, DS5, D5, REST, DS5, F5, G5,

  //chorus
  AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,  //chorus
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, F5, G5, F5, DS5, D5, AS4, C5, AS4, C5, D5, DS5, F5, G5, C5,
  G5, AS5, AS5, C6, G5, F5, G5, F5, G5, AS5, C6, G5, F5, G5, C6, D6, DS6, D6, C6, AS5, G5, F5, G5, F5, DS5, D5, AS4, C5,
  //last chorus
  GS5, B5, B5, CS6, GS5, FS5, GS5, FS5, GS5, B5, CS6, GS5, FS5, GS5, FS5, GS5, FS5, E5, DS5, B4, CS5, B4, CS5, DS5, E5, FS5, GS5, CS5,
  GS5, B5, B5, CS6, GS5, FS5, GS5, FS5, GS5, B5, CS6, GS5, FS5, GS5, FS5, GS5, FS5, E5, DS5, B4, CS5, B4, CS5, DS5, E5, FS5, GS5, CS5,
  GS5, B5, B5, CS6, GS5, FS5, GS5, FS5, GS5, B5, CS6, GS5, FS5, GS5, FS5, GS5, FS5, E5, DS5, B4, CS5, B4, CS5, DS5, E5, FS5, GS5, CS5,
  GS5, B5, B5, CS6, GS5, FS5, GS5, FS5, GS5, B5, CS6, GS5, FS5, GS5, CS6, DS6, E6, DS6, CS6, B5, GS5, FS5, GS5, FS5, E5, DS5, B4, CS5,

  //last melody
  B5, CS6, GS5, FS5, GS5, FS5, GS5, FS5, REST, B5, DS6, FS6, CS6, DS6, E6, DS6, CS6, B5, GS5, FS5, GS5, FS5, B5,
  E7, DS7, CS7, B6, GS6, B6, FS6, B5, CS6, GS5, FS5, GS5, FS5, GS5, B5, CS6, GS5, FS5, GS5, CS6, DS6, E6, DS6, CS6, B5, GS5,
  FS5, GS5, FS5, GS5, FS5, GS5, E6, DS6, REST, B5, E6, B6, REST, B6, E7, FS7, REST

};


//Negative number will represent the dotted note. ex -8 will play a dotted eighth note
/* 1 = WHOLE NOTE    
   2 = HALF NOTE
   4 = QUARTER NOTE
   8 = EIGHTH NOTE  
  16 = SIXTEENTH NOTE */
int mainNotes[] = {
  //beginning
  8, 8, 8, 8, -8, 16, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4,  //beginning
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, -8, 16, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 4, 4,

  //chorus
  8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,  //chorus
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, -4,
  4,  //rest note after chorus

  8, 16, 8, 8, 16, 16, 8, 16, 16, 8, 16, 16, 16, 16, 16, 16, 16, 8, 8, 16,
  8, 8, 16, 8, 16, 16, 16, 16, 4, 8, 8, 16, 8, 16, 8, 8,
  -16, -16, -16, -16, -8, 16,
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8,
  16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 16, 16, 8, 8,
  //sure what the hell
  8, 16, 16, -16, 16, 32, 32, 32, 16, 16, 32, 32, 32, 16, 16, 32, 32, 32, 16, 16, 32, 32,
  32, 16, 16, 32, 32, 32, 16, 32, 32, 32, 32, 16, 32, 32, 32, -16, -8,

  //copy paste from beginning
  8, 8, 8, 8, -8, 16, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4,  //beginning
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, -8, 16, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 4, 4,

  //chorus
  8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,

  //last chorus
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8,
  8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 2,

  //last melody
  8, 8, 8, 8, 4, 8, 8, -4, 16, 32, 32, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 4, 4,
  16, 16, 16, 16, 16, 16, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4,
  8, 8, 8, 8, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, -4, 2

};


//calculate the total length of the notes
size_t melLength = sizeof(mainMelody) / sizeof(mainMelody[0]);

void setup() {
  //buzzer output pin setup
  pinMode(BUZZERPIN, OUTPUT);

  //variable set up
  unsigned long previousMillis = millis();
  unsigned long currentMillis;
  int noteDuration;
  int currentNote; 

  //main melody playing here
  for (int thisNote = 0; thisNote < melLength; thisNote++) {

    //this is to read mainMelody array thats now stored in flash memory
    currentNote = pgm_read_word(&mainMelody[thisNote]);

    //dotted note logic
    mainNotes[thisNote] > 0 ? noteDuration = wholenote / mainNotes[thisNote] : noteDuration = (wholenote / (abs(mainNotes[thisNote]))) * 1.5;

    //play the sound
    tone(BUZZERPIN, currentNote, noteDuration * 0.9); //play note with 90% duration

    // the note's duration time. This will keep pulling until the duration time is up
    do {
      currentMillis = millis();                                     //grab current time
    } while (!((currentMillis - previousMillis) >= noteDuration));  //check if time is long enough
    previousMillis = currentMillis;                                 //update previousmilli

    // stop the tone playing:
    noTone(BUZZERPIN);
  }
}


void loop() {
  //does nothing
}

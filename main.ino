#include "pitches.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define REC_LENGTH 200
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void playMainRiff(){
    //F6
    tone(8, NOTE_F6,1000/1);
    delay(250);

    //F7 + G#7
    notone(7, NOTE_F7,1000/1);
    tone(8, NOTE_GS7,1000/1);
    delay(250);

    //C#6
    tone(8, NOTE_CS6,1000/1);
    delay(250);
    
    //(F7 + C#7) x3
    notone(7, NOTE_F7,1000/1);
    tone(8, NOTE_CS7,1000/1);
    delay(250);
    
    //G#6
    tone(8, NOTE_GS6,1000/1);
    delay(250);

    //G#7 + C8
    notone(7, NOTE_GS7,1000/1);
    tone(8, NOTE_C8,1000/1);
    delay(250);
    
    //D#6
    tone(8, NOTE_DS6,1000/1);
    delay(250);
    
    //(D#7 + G7) x3
    tone(7, NOTE_DS7,1000/1);
    tone(8, NOTE_G7,1000/1);
    delay(250);
}

void displayLyrics(){
    display2Messages("Una wacha piola","que se pone re loca");
    display2Messages("Y nunca he sentido nada","como esto en mi vida");
}

void startScreen(){
    display.setTextSize(1);
    display.setTextColor(WHITE);
}

void display2Messages(string message1,string message2){
    display.clearDisplay();
    display.setCursor(10, 25);
    display.println(F(message1));
    display.setCursor(10, 45);
    display.println(F(message2));
    display.display();
}

void displayMessage(string message){
    display.clearDisplay();
    display.setCursor(10, 25);
    display.println(F(message));
    display.display();
}

void displaySongDetails(){
    display2Messages("Una wacha piola", "De la calle");
    delay(5000);
}

void setup() {
    pinMode(8, OUTPUT);
    pinMode(7, OUTPUT);

    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
    {
    for (;;)
        ;
    }
    displaySongDetails();
}

void loop() {
    playMainRiff();
    playMainRiff();
    displayLyrics();
}
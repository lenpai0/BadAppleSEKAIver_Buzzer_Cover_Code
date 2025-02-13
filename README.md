# Bad Apple!! feat.SEKAI Buzzer Cover Code

Song: [Bad Apple!! feat.SEKAI / 25時、ナイトコードで。 × 初音ミク](https://www.youtube.com/watch?v=v-fc1zv31zE)

I love this cover a lot and being a huge miku fan and having the ability to program a microcontroller, I decided to make the 2dMV as well as the buzzer cover to go along with it. This is branch only includes the main melody of bad apple. I will upload the whole code at some point and update this to reflect on that.

## Intro

This is a modified program from my most popular [TikTok](https://www.tiktok.com/@lenpai0/video/7463351523045690630) video. This code should work for any Arduino board. When uploaded, it will simply play the main melody of Bad Apple. Press the reset button to play the music again.

## How to make
You will need a **passive** buzzer/speaker. This will not work for an active buzzer. This is an excellent guide on the key difference and methods to use to tell what buzzer you have as you cannot tell by simply looking at one. https://circuitdigest.com/microcontroller-projects/understanding-difference-between-active-and-passive-buzzer-with-arduino

### Schematic 
This program uses pin 8 as the buzzer pin but it can be changed to any other GPIO pins.

![image](https://github.com/user-attachments/assets/d1a5fd0b-2071-45e7-b3b1-33bd92948a3a)

Pay attention if your buzzer has polarity ('+' mark at the top). Some buzzers have them, mine doesn't and I have no clue why. If it does have polarity, make sure that the '+' side pin is connected to Arduino pin. Otherwise, it doesn't which pin goes where.

Download the .ino file. I squished everything together in the one file so you don't have to worry about finding libraries or extra files. All you have to do is upload the code to the arduino board. 

## Resources used

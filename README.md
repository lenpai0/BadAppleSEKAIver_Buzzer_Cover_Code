# Bad Apple!! feat.SEKAI Buzzer Cover Code

Song: [Bad Apple!! feat.SEKAI / 25時、ナイトコードで。 × 初音ミク](https://www.youtube.com/watch?v=v-fc1zv31zE)

![bad apple small](https://github.com/user-attachments/assets/0cd2797c-ee32-4ac6-9cf4-b14e79e745a7)

I love this cover a lot. Me being a huge miku fan and the ability to program a microcontroller, I decided to make a buzzer cover of it. I found someone on youtube who made an amazing marasy piano cover by @Sapphire_Titech and purchased their [music sheet](https://musashititech18.booth.pm/items/5874309) to use as reference. I painstaking hand coded each note one by one.

This branch only includes the main melody buzzer code. I also made the 2dMV to play on an oled display to go along with the buzzer and I will upload the whole code at some point and update this to reflect on that. 

## Intro

This is a modified program from my most popular [TikTok](https://www.tiktok.com/@lenpai0/video/7463351523045690630) video. This code should work for any Arduino board. When uploaded, it will simply play the whole main melody of Bad Apple. Press the reset button to play the music again.

This code mainly uses the Arduino's tone() function and millis() instead of delay() for more accurate timing in between the notes.

## Instructions
You will need a **passive** buzzer/speaker. This will not work for an active buzzer. There is an excellent guide by Gourav Tak on methods to use to tell what buzzer you have as you cannot tell by simply looking at one. https://circuitdigest.com/microcontroller-projects/understanding-difference-between-active-and-passive-buzzer-with-arduino

### Schematic 
This program uses pin 8 as the buzzer pin but it can be changed to any other GPIO pins. There is a resistor in series to limit the current going through the buzzer. 1kΩ is good enough.

![image](https://github.com/user-attachments/assets/d1a5fd0b-2071-45e7-b3b1-33bd92948a3a)

Pay attention if your buzzer has polarity ('+' mark at the top). Some buzzers have them, mine doesn't and I have no idea why. If it does have polarity, make sure that the '+' side pin is connected to Arduino pin. Otherwise, it doesn't matter which pin goes where.

### Uploading Sketch
Download the BadAppleSEKAIver.ino file. I squished all the code together into one file so you don't have to worry about finding extra files. 

Line 42 is where you can change the buzzer pin.

![image](https://github.com/user-attachments/assets/9a329538-c119-45f3-aca4-f7b604e8226d)

Select the board you are using and upload the code. 

![upload img](https://github.com/user-attachments/assets/bd9fcec6-3323-4015-bd55-576d37b8302f)

### Playing the music
As soon as you upload the code you should hear music playing. To play the melody again, press the reset button on the board
[Bad Apple!! feat.SEKAI Buzzer Cover Code Demo]

### Extra
You can also wire an LED and resistor parallel to buzzer to visually see the note playing
![image](https://github.com/user-attachments/assets/7477a227-0d0c-40a9-8918-f073a09f5d4d)

[another video with led attach to the buzzer]
## Resources used
* Bought the piano cover sheet music from: https://www.youtube.com/watch?v=VVsgW76z00o
* Partial code borrowed from: https://github.com/robsoncouto/arduino-songs/tree/master

## Usage
This is an open source project. If you find yourself using this code to add to your project or posting a video/tutorial with it, I simply ask that you credit me @lenpai0 and provide a link to this page. Thanks and enjoy!

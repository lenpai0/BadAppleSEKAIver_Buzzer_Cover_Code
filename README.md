# Bad Apple!! feat.SEKAI Buzzer Cover Code

Song: [Bad Apple!! feat.SEKAI / 25時、ナイトコードで。 × 初音ミク](https://www.youtube.com/watch?v=v-fc1zv31zE)

![bad apple buzzer github](https://github.com/user-attachments/assets/68efd466-26ea-429f-8374-37a8a174d495)


I love this cover a lot. Being a huge miku fan and the ability to program a microcontroller, I decided to make a buzzer cover of it. I found someone on youtube who made an amazing marasy piano cover by @Sapphire_Titech and purchased their [sheet music](https://musashititech18.booth.pm/items/5874309) to use as reference. I painstaking hand coded each note one by one and did my best to accurately match the note timing to the original (I couldn't do the fast piano bit, that was outside my skill).

This branch only includes the main melody buzzer code. If you are interested, I also made the 2dMV to play on an oled display to go along with the buzzer. I will upload the whole code at some point and update this to reflect on that. 

## Intro

This is a modified program from my most popular [TikTok video](https://www.tiktok.com/@lenpai0/video/7463351523045690630). This code should work for any Arduino board, no programming experience needed. When uploaded, it will simply play the whole main melody of Bad Apple. Press the RESET button on the board to play the music again.

This code mainly uses the Arduino's tone() function and millis() instead of delay() for more accurate timing in between the notes.

## Instructions
You will need a **passive** buzzer/speaker. This will not work for an active buzzer. There is an excellent guide by Gourav Tak on methods to use to tell what buzzer you have as you cannot tell by simply looking at one. https://circuitdigest.com/microcontroller-projects/understanding-difference-between-active-and-passive-buzzer-with-arduino

### Schematic 
This program uses pin 8 as the buzzer pin but it can be changed to any other GPIO pins. There is a resistor in series to limit the current going through the buzzer. 1kΩ is good enough.

![image](https://github.com/user-attachments/assets/d1a5fd0b-2071-45e7-b3b1-33bd92948a3a)

Pay attention if your buzzer has polarity ('+' mark at the top). Some buzzers have them, mine doesn't and I have no idea why. If it does have polarity, make sure that the '+' side pin is connected to Arduino pin. Otherwise, it doesn't matter which pin goes where.

### Uploading Sketch
Download the ZIP file and extract with your preferred method of choice. You can also directly download the 'BadAppleSEKAIver.ino' file. I squished all the code together so you don't have to worry about finding extra files. 

![bad apple download instruct](https://github.com/user-attachments/assets/50a89756-d23c-433c-9055-c486a4361f91)

Open the BadAppleSEKAIver.ino and select OK

![image](https://github.com/user-attachments/assets/66ae8d36-18d3-4f1b-bb59-e6bd5c285580)

Line 42 is where you can change the buzzer pin.

![image](https://github.com/user-attachments/assets/e1f97382-ba1a-4cd3-9509-39d34ed9c5ea)

Select the board you are using and upload the code. 

![upload img](https://github.com/user-attachments/assets/bd9fcec6-3323-4015-bd55-576d37b8302f)

### Playing the music
As soon as you upload the code you should hear music playing. To play the melody again, press the reset button on the board.

[![YouTube](http://i.ytimg.com/vi/idRYm0s9MTA/hqdefault.jpg)](https://www.youtube.com/watch?v=idRYm0s9MTA)

If it doesn't work, double check the wiring. Is it connected to the right pin? Is there polarity on the buzzer? Is ground connected? If you changed the code, does it affect the tone()/millis() function? or try a different pin!

### Extra
You can also wire an LED and resistor in parallel to the buzzer to visually see each note playing
![image](https://github.com/user-attachments/assets/7477a227-0d0c-40a9-8918-f073a09f5d4d)

https://github.com/user-attachments/assets/0b410f99-aee7-483a-9c24-76346c8bddbf


## Resources used
* Bought the piano cover sheet music from: https://www.youtube.com/watch?v=VVsgW76z00o
* Partial code borrowed from: https://github.com/robsoncouto/arduino-songs/tree/master
* Difference between active vs passive buzzer: https://circuitdigest.com/microcontroller-projects/understanding-difference-between-active-and-passive-buzzer-with-arduino

## Usage
If you find yourself using this code to add to your project or make a video/tutorial with it, I simply ask that you credit me @lenpai0 and provide a link to this page. Thanks and enjoy!

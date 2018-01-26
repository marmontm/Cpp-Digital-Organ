# Cpp-Digital-Organ
  
Digital musical organ playable in Windows command prompt.  
Program written in C++ for Windows  
  
## Tags
Organ, C++, geii-lab-info1

## Project description

### Purpose
This application can be considered as a tiny game, written in C++ with a command line interface. This is a simple numerical organ where the user can play, record and recognize musical notes. It can play only 1 octave of notes, including:  
  
C - D - E - F - G - A - B (American notation)  
Do - Re - Mi - Fa - Sol - La - Si (European notation) 
   
Keyboard is set corresponding with American notes, so to play a E (or Mi), you have to press the E-key. But you can also modify this in the define section inside the "Header.h", like #define 'MI_KEY' 'e'. Q-key is for Quit, and other keys put a silence.  
  
### Main features
When the user runs the program, a menu appears where the user can choose between different modes and a rules/info section.  
Our game has 3 independent modes:  
1. Free mode: the user can play the notes as long as he wants
2. Record mode: the user can play until 50 notes while the program is recording them, and replay them identically
3. Game mode: the software plays a random note and the user has just a few seconds to recognize it by pressing the corresponding key. One game plays 20 notes, so at the end the user will get a grade over 20, and a comment ;) 

## How to use this repo?

### As final user
1. Download the latest release on **Github** as .zip file
2. Extract all files (keep structure as it is)
3. Install **Microsoft C++ Redistributables Tools** (require C++ libraries) from `vcredist_vs2013_x86.exe`. You can also download this file from *Microsoft Download Center*
4. Restart your computer
5. Start Organ.exe

### As developer
1. Download repo
2. Import .cpp and .h files in an empty C++ project from your favorite IDE.
3. Import also "media" directory where the sounds are stored (keep it in the same folder as your source files)
4. You can now compile it. (Working on Windows but not tested on UNIX systems as Linux and macOS)

> **Additional information:**   
> Our project was built with Visual Studio 2013 (building tools v12.0)

## Credits
This work was done as part of a university project.  
  
Done by **Alan Bello** and **Maxime Marmont**, 1st-year students in a 2-year university degree in Electrical Engineering and Computer Science (DUT GEII, Génie Electrique et Informatique Industrielle) in IUT Annecy, France.  
  
December 2015

## Copyright/license
MIT License  
Copyright © 2015 Alan BELLO & Maxime MARMONT  

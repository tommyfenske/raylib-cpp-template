# Raylib C++ Template

A small template to get started in creating your Raylib projects using C++. 

## Features:
- Includes an example class with header and .cpp files.
- Contains code for a basic game loop based on examples from https://www.raylib.com/examples.html.
- Optional features like fullscreen support are included in comments. Uncomment the code to include them!
- Comments with compile commands, just paste into the terminal. Instructions are also [below](#compile-and-run-instructions).
- Organized file structure with premade assets like sound effects!

## File Structure:
```
\-- assets
\-- include
    +-- example.h
    +-- raylib.h
    +-- raymath.h
\-- lib
    +-- libraylib.a
\-- src
    +-- example.cpp
    +-- main.cpp
+-- README.md
```
### \assets
A folder to put texture and sound files for your game.

### \include
Put your header files here. Raylib and Raymath are also included by default.

### \lib
Unless you're adding other libraries, leave this alone!

### \src
Put your .cpp files here.

### Compile and Run Instructions
**The following instructions are for Windows computers and assume gcc is already installed on your machine.**
1. Navigate to the root directory of your project in the terminal. 
2. Use the following command to compile your project:
```console
gcc src/*.cpp -o project.exe -O1 -Wall -std=c++2c -lstdc++ -Wno-missing-braces -I ./include/ -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
```
3. Run your project with:
```console
./project.exe
```

### Roadmap / Future Improvements:
- Add keyboard and mouse input
- Add game controller support
- Add compile commands for other platforms
- Add basic sound effects and images
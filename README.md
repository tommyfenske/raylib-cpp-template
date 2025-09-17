# Raylib C++ Template

A small template to get started in creating your Raylib projects using C++. 

## Features:
- Includes an example class with header and .cpp files.
- Contains code for a basic game loop based on examples from https://www.raylib.com/examples.html.
- Optional features like fullscreen support are included in comments. Uncomment the code to include them!
- Comments with compile commands, just paste into the terminal. Instructions are also [below](#compile-and-run-instructions).

## Compile and Run Instructions
1. Navigate to the root directory in the terminal. 
2. Use the following command to compile your project:
```console
gcc src/*.cpp -o project.exe -O1 -Wall -std=c++2c -lstdc++ -Wno-missing-braces -I ./include/ -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
```
3. Run your project with:
```console
./project.exe
```

### Roadmap:
- Add keyboard and mouse input
- Add game controller support
#include "raylib.h"
#include "raymath.h"

#include "example.h"

// Compile command:
// gcc src/*.cpp -o project.exe -O1 -Wall -std=c++2c -lstdc++ -Wno-missing-braces -I ./include/ -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm


// Global Variables
static const int screenWidth = 800;
static const int screenHeight = 600;

// Declare Game Functions
static void InitGame(void);         // Initialize game
static void UpdateGame(void);       // Update game (one frame)
static void DrawGame(void);         // Draw game (one frame)
static void UnloadGame(void);       // Unload game
static void UpdateDrawFrame(void);  // Update and Draw (one frame)

int main() {
  InitWindow(screenWidth, screenHeight, "Raylib C++ Template");
  //ToggleFullscreen();

  InitGame();
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    UpdateDrawFrame();
  }

  UnloadGame();
  CloseWindow();
  return 0;
}

void InitGame(void)
{
    Example e = Example();
    e.print();
}

void UpdateGame(void)
{
  
}

void DrawGame(void)
{
  BeginDrawing();
    
      ClearBackground(BLACK);
      DrawText("It works!", 20, 20, 20, WHITE);

    EndDrawing();
}

void UnloadGame(void)
{

}

void UpdateDrawFrame(void)
{
  UpdateGame();
  DrawGame();
}
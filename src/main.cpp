#include <raylib.h>
#include "screens/screens.h"

int screenWidth = 800;
int screenHeight = 600;

Gamescreen currentScreen = TITLE;

static void UpdateDraw();


int main(){
  InitWindow(screenWidth, screenHeight, "Dracula");

  SetTargetFPS(60);

  while(!WindowShouldClose()){
    UpdateDraw();
  }
  
  CloseWindow();

  return 0;
}


static void UpdateDraw(){

  //Screen logic
  switch(currentScreen){
    case TITLE:
      UpdateTitleScreen();

      if(FinishTitleScreen()){
        //InitGameplayScreen();
        UnloadTitleScreen();
        currentScreen = GAMEPLAY;
      }

      break;

    default: break;
  }

  //Draw 
  BeginDrawing();
    
    ClearBackground(RAYWHITE);

    switch(currentScreen){
      case TITLE:
        DrawTitleScreen();
        break;
      default: break;
    }

  EndDrawing();

}

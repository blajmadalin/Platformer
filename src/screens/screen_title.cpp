#include <raylib.h>
#include "screens.h"

const char* titleText;
static int fontSize;
static int textWidth;
static int posTextX;
static int posTextY;
static int finishScreen = 0;

void InitTitleScreen(){
  
  titleText = "Click to play";
  fontSize = 24;
  textWidth = MeasureText(titleText, fontSize);
 
  posTextX  = (screenWidth - textWidth) / 2;
  posTextY  = (screenHeight - fontSize) / 2;

}

void DrawTitleScreen(){
  InitTitleScreen();

  DrawText(titleText, posTextX, posTextY, fontSize, BLACK);
}

void UpdateTitleScreen(){
  if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
    finishScreen = 1;
  }
}

void UnloadTitleScreen(){
  titleText = "";
  fontSize  = 0;
  textWidth = 0;

  posTextX = 0;
  posTextY = 0;
}

int FinishTitleScreen()
{
    return finishScreen;
}

#include <raylib.h>
#include "platform.h"

void InitPlatform(Platform* platform){
  platform -> rect.x = 0;
  platform -> rect.y = 500;
  platform -> rect.height = 20;
  platform -> rect.width = 100;
}

void DrawPlatform(Platform* platform){
  DrawRectangle(platform -> rect.x, platform -> rect.y, platform -> rect.width, platform -> rect.height, RED);
}

void UpdatePlatform(){}
void UnloadPlatform(){}

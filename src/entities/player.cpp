#include "entities.h"
#include <raylib.h>
#include "../screens/screens.h"

void InitPlayer(Entities* player){
  player -> health = 100;
  player -> velocity = 5;
  player -> position = {200, 200}; 
}

void DrawPlayer(Entities* player){
  DrawCircle(player -> position.x, player -> position.y, 20, WHITE);
}

void UpdatePlayer(Entities* player){
  if(IsKeyDown(KEY_D)){
    player -> position.x += 5;
  }

  else if(IsKeyDown(KEY_A)){
    player -> position.x -= 5;
  }
}

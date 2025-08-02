#include "entities.h"
#include <raylib.h>
#include <raymath.h>
#include <iostream>
#include "../screens/screens.h"
#include "../levels/platform.h"
#include "../levels/platform.h"

float maxJump = -300;

float gravity = 150;

void InitPlayer(Entities* player){
  player -> health = 100;
  player -> velocity_x = 5;
  player -> position = {200, 599};
  player -> velocity_y = 0;
  player -> jumping = false;
  player -> texture = LoadTexture("../assets/textures/player.png");
}

void DrawPlayer(Entities* player){
  DrawTextureEx(player -> texture, player -> position, 0.0f, 4.0f, WHITE);
}

bool CheckCollision(Entities* player, Platform* platform){
  Rectangle playerRectangle;
  playerRectangle.x = player -> position.x;
  playerRectangle.y = player -> position.y;
  playerRectangle.width = player -> texture.width * 4.0f;
  playerRectangle.height = player -> texture.height * 4.0f;

  if(CheckCollisionRecs(playerRectangle, platform -> rect)){
    return true;
  }
    
  return false;
  /*BeginDrawing();
  DrawRectangleLines(playerRectangle.x, playerRectangle.y, playerRectangle.width, playerRectangle.height, RED);
  EndDrawing();
  */
  
}

void UpdatePlayer(Entities* player, Platform* platform, float deltaTime){
  
  if(IsKeyDown(KEY_D)){
    player -> position.x += player -> velocity_x;
  }

  if(IsKeyDown(KEY_A)){
    player -> position.x -= player -> velocity_x;
  }

  if(IsKeyDown(KEY_SPACE) && player -> velocity_y == 0){
    player -> velocity_y = maxJump;
  }

  player -> velocity_y += gravity * deltaTime;
  player -> position.y += player -> velocity_y * deltaTime;

  if(player -> position.y >= 600 && player -> velocity_y > 0){
    player -> velocity_y = 0.0f;
    player -> position.y = 600;
  }   

  else if(CheckCollision(player, platform)){
    player -> velocity_y = 0.0f;
    player -> position.y = platform -> rect.y - player -> texture.height * 4.0f;
  }
}



void UnloadPlayer(){} 

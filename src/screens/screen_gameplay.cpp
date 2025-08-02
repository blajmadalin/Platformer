#include <raylib.h>
#include <iostream>
#include "screens.h"
#include "../entities/entities.h"
#include "../utils/json.hpp"
#include <fstream>
#include "../levels/platform.h"

Entities player;
Platform platform;
int score; 
using json = nlohmann::json;


void InitGameplayScreen(){

  /*getting data from json
  std::ifstream file("src/levels/level1.json");
  if(!file) {
    std::cerr << "Could not open file .\n";
  }

  json levelData;
  file >> levelData;
  */

  InitPlayer(&player);
  InitPlatform(&platform);
  score = 0;
}

void DrawGameplayScreen(){

  //Drawing screen;
  DrawRectangle(0, 0, screenWidth, screenHeight, BLACK);

  //Drawing player
  DrawPlayer(&player);

  //Draw platform
  DrawPlatform(&platform);

  //Drawing score to the top right of the screen
 const char* scoreText = TextFormat("Score: %.0f", player.position.y);
  int fontSize = 24;
  int textWidth = MeasureText(scoreText, fontSize);
  int padding = 20;
  DrawText(scoreText, screenWidth - textWidth - padding, padding, fontSize, WHITE);
}

void UpdateGameplayScreen(){
  float deltaTime = GetFrameTime();
  UpdatePlayer(&player, &platform, deltaTime);
}

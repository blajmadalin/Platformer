#include <raylib.h>
#include <iostream>
#include "screens.h"
#include "../entities/entities.h"
#include "../utils/json.hpp"
#include <fstream>

Entities player;
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
  score = 0;
}

void DrawGameplayScreen(){

  //Drawing screen;
  DrawRectangle(0, 0, screenWidth, screenHeight, BLACK);

  //Drawing player
  DrawPlayer(&player);
  
  //Drawing score to the top right of the screen
  const char* scoreText = TextFormat("Score: %d", score);
  int fontSize = 24;
  int textWidth = MeasureText(scoreText, fontSize);
  int padding = 20;
  DrawText(scoreText, screenWidth - textWidth - padding, padding, fontSize, WHITE);
}

void UpdateGameplayScreen(){
  UpdatePlayer(&player);
}

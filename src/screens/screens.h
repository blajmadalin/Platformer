#ifndef SCREENS
#define SCREENS

#include <raylib.h>

extern int screenWidth;
extern int screenHeight;

typedef enum GameScreen {Unknown = -1, TITLE = 0, GAMEPLAY, END} Gamescreen;
extern Gamescreen currentScreen;

#endif

//Title screen
void InitTitleScreen();
void DrawTitleScreen();
void UpdateTitleScreen();
int FinishTitleScreen();
void UnloadTitleScreen();

//Level01
void InitGameplayScreen();
void DrawGameplayScreen();
void UpdateGameplayScreen();
int finishGameplayScreen();
void UnloadGameplayScreen();

//End screen
void InitEndScreen();
void DrawEndScreen();
void UpdateEndScreen();
int finishEndScreen();
void UnloadEndScreen();

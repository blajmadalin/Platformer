#include <raylib.h>
#include "../levels/platform.h"

class Entities{
  public:
    int health;
    Vector2 position;
    float velocity_x;
    float velocity_y;
    Texture2D texture;
    bool jumping;
};


//Player
void InitPlayer(Entities* player);
void DrawPlayer(Entities* player);
void CheckCollision(Entities* player);
void UpdatePlayer(Entities* player, Platform* platform, float deltaTime);
void UnloadPlayer(void);

#include <raylib.h>

class Entities{
  public:
    int health;
    Vector2 position;
    int velocity;
    Texture2D texture;
};


//Player
void InitPlayer(Entities* player);
void DrawPlayer(Entities* player);
void UpdatePlayer(Entities* player);

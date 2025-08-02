#ifndef PLATFORM
#define PLATFORM
#include <raylib.h>

typedef struct{
  Rectangle rect;
}Platform;

extern Platform platform;

#endif // !PLATFORM

void InitPlatform(Platform* platform);
void DrawPlatform(Platform* platform);
void UpdatePlatform();
void UnloadPlatform();


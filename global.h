#pragma once
#pragma once
#pragma once
#include "raylib.h"
#include <memory>
#include <vector>
#include "Bush.h"
#include "Player.h"

extern Camera2D camera;
extern Rectangle levelBounds;
extern float halfScreenW;
extern float halfScreenH;
extern std::unique_ptr<Player> player;
extern std::vector<Bush> bushes;
extern float groundY;
extern int bushjumpScore;
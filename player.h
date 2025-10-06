#pragma once
#pragma once
#include "raylib.h"
#include <vector> // Add this at the top of the file, before using std::vector
#include "bush.h"

// Defines a simple player class for side-scrolling movement
class Player {
public:
    // Constructor: sets the starting position of the player
    Player(Vector2 startPos);

    // Updates player logic (movement, etc.)
    void Update(float dt, const std::vector<Bush>& bushes);

    // Draws the player to the screen
    void Draw() const;

    // Returns the current position of the player
    Vector2 GetPosition() const;

    //Checks for collisions
    void TryMove(Vector2 delta, const std::vector<Bush>& bushes);

    Vector2 previousPosition;
    Rectangle GetHitbox() const;

private:
    Vector2 position;     // Player's position in the world
    Rectangle hitbox;    // Player's collision rectangle
    float speed = 200.0f; // Movement speed in pixels per second
    float width = 50;     // Width of the player rectangle
    float height = 80;    // Height of the player rectangle
    Vector2 velocity = { 0, 0 };
    float gravity = 800.0f;       // pixels per second�
    float jumpForce = -500.0f;    // upward velocity
    bool isOnGround = false;

};
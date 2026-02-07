#ifndef GAME_H
#define GAME_H

#include "Snake.h"
#include "Food.h"

//// Main game controller class
class Game {
  private:
    bool gameOver;  //// Game state flag
    
    //// Game area dimensions
    int width;
    int height;

    int score;  //// Player score

    //// Game objects
    Snake snake;
    Food food;

    void input();
    void update();
    void render();

  public:
    Game(); //// Constructor: initializes game variables
    void run(); // // Starts and runs the main game loop
};

#endif
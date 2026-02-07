#ifndef FOOD_H
#define FOOD_H

#include <utility>
#include <deque>

using namespace std;

class Food {
  private:
    pair<int, int> position;  //// Stores the food position as (x, y) coordinates

  public:
    Food(); //// Constructor: initializes the food object

    //// Spawns food at a random position within the game area
    //// width, height → boundaries of the game window
    //// snakeBody → used to avoid spawning food on the snake
    void spawn(int width, int height, const deque<pair<int, int>>& snakeBody);

    pair<int, int> getPosition() const; //// Returns the current position of the food
};

#endif
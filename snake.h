#ifndef SNAKE_H
#define SNAKE_H

#include <deque>    ////for deque container
#include <utility>  ////for pair

using namespace std;

////Represents possible movement directions of the snake
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN};

class Snake {
  private:
      ////Stores the snake body as (x, y) coordinates
      ////Front of deque = head, back = tail
      deque<pair<int, int>> body;

      //// Current moving direction of the snake
      Direction dir;

  public:
      //// Constructor: initializes snake at starting position
      Snake(int startX, int startY);

      void setDirection(Direction d); //// Sets the snake's direction

      //// Returns the current direction (does not modify object)
      Direction getDirection() const;

      void move();  //// Moves the snake in the current direction
      void grow();  //// Grows the snake by adding a new body segment

      //// Returns the head position (x, y)
      pair<int, int> getHead() const;

      //// Returns read-only access to the entire body
      const deque<pair<int, int>>& getBody() const;
};

#endif
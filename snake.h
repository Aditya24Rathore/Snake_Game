#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include <utility>

using namespace std;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN};

class Snake {
  private:
      deque<pair<int, int>> body;
      Direction dir;

  public:
      Snake(int startX, int startY);

      void setDirection(Direction d);
      Direction getDirection() const;

      void move();
      void grow();

      pair<int, int> getHead() const;
      const deque<pair<int, int>>& getBody() const;
};

#endif
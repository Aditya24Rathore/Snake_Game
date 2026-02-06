#include "snake.h"

Snake::Snake(int startX, int startY) {
  body.push_back({startX, startY});
  dir = STOP;
}

void Snake::setDirection(Direction d) {
  
  ////Prevent opposite direction movements
  if((dir == LEFT && d == RIGHT)  ||
      (dir == RIGHT && d == LEFT) ||
      (dir == UP && d == DOWN)  ||
      (dir == DOWN && d == UP))
      return;

  dir = d;
}
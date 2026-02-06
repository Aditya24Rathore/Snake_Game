#include "snake.h"

Snake::Snake(int startX, int startY) {
  body.push_back({startX, startY});
  dir = STOP;
}
#ifndef FOOD_H
#define FOOD_H

#include <utility>
#include <deque>

using namespace std;

class Food {
  private:
    pair<int, int> position;

  public:
    Food();

    void spawn(int width, int height, const deque<pair<int, int>>& snakeBody);

    pair<int, int> getPosition() const;
};

#endif
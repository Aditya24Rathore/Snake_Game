#include "food.h"
#include  <cstdlib>
#include <ctime>

Food::Food() {

    srand(time(0));
    position = {0, 0};
}

void Food::spawn(int width, int height, const deque<pair<int, int>>& snakeBody) {
    
    bool onSnake;

    do {
        onSnake = false;
        position.first = rand() % (width - 2) + 2;
        position.second = rand() % (height - 2) + 2;

        for(const auto& segment : snakeBody) {
            if(segment == position) {
              onSnake = true;
              break;
            }
        }
    }while(onSnake);
}

pair<int, int> Food::getPosition() const {
    return position;
}
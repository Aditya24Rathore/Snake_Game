#include "Food.h"
#include  <cstdlib> //// for rand(), srand()
#include <ctime>  //// for time()

//// Constructor: initializes food object
Food::Food() {

    srand(time(0)); //// Seed the random number generator (done once)
    position = {0, 0};  //// Initial food position
}

//// Spawns food at a random valid position
void Food::spawn(int width, int height, const deque<pair<int, int>>& snakeBody) {
    
    bool onSnake;

    do {
        onSnake = false;  //// Assume food is not on the snake

        //// Generate random position within game boundaries
        //// (avoids borders by leaving 1-cell margin)
        position.first = rand() % (width - 2) + 2;
        position.second = rand() % (height - 2) + 2;

        //// Check if generated position overlaps with snake body
        for(const auto& segment : snakeBody) {
            if(segment == position) {
              onSnake = true; //// invalid position
              break;
            }
        }
    }while(onSnake);  //// repeat until valid position found
}

//// Returns the current food position
pair<int, int> Food::getPosition() const {
    return position;
}
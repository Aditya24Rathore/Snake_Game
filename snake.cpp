#include "Snake.h"

//// Constructor: initializes the snake at a starting position
Snake::Snake(int startX, int startY) {
    body.push_back({startX, startY}); //// Add the initial head position to the body
    dir = STOP; //// Snake starts in a stopped state
}


//// Sets the snake's movement direction
void Snake::setDirection(Direction d) {
  
    //// Prevent the snake from moving in the opposite direction (avoids instant collision with itself)
    if((dir == LEFT && d == RIGHT)  ||
        (dir == RIGHT && d == LEFT) ||
        (dir == UP && d == DOWN)  ||
        (dir == DOWN && d == UP))
        return;

    dir = d;  //// Update direction if valid
}

//// Returns the current direction of the snake 
Direction Snake::getDirection() const {
    return dir;
}

//// Moves the snake one step in the current direction
void Snake::move() {
    if(dir == STOP) return; //// Do nothing if the snake is not moving

    pair<int, int> head = body.front(); //// Get the current head position

    //// Update head position based on direction
    switch (dir) {
        case LEFT: head.first--; break; //// move left
        case RIGHT: head.first++; break;  //// move right
        case UP: head.second--; break;  //// move up
        case DOWN: head.second++; break;  //// move down
        default: break;
    }

    body.push_front(head);  //// Add new head position 
    body.pop_back();  //// Remove last tail segment to keep length same
}

//// Grows the snake by one segment
void Snake::grow() {
    //// Duplicate the last segment to increase length
    body.push_back(body.back());
}

//// Returns the current head position of the snake
pair<int, int> Snake::getHead() const {
    return body.front();
}

//// Returns read-only access to the entire snake body
const deque<pair<int, int>>& Snake::getBody() const {
    return body;
}
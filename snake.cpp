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

Direction Snake::getDirection() const {
    return dir;
}

void Snake::move() {
    if(dir == STOP) return;

    pair<int, int> head = body.front();

    switch (dir) {
        case LEFT: head.first--; break;
        case RIGHT: head.first++; break;
        case UP: head.second--; break;
        case DOWN: head.second++; break;
        default: break;
    }

    body.push_front(head);
    body.pop_back();
}

void Snake::grow() {
    //// Add a new segment at the tail (duplicate last)
    body.push_back(body.back());
}

pair<int, int> Snake::getHead() const {
    return body.front();
}

const deque<pair<int, int>>& Snake::getBody() const {
    return body;
}
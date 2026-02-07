#include "game.h"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

Game::Game()
    : gameOver(false),
      width(40),
      height(20),
      score(0),
      snake(width / 2, height / 2) {

        food.spawn(width, height, snake.getBody());
      }


void Game::input() {
    
    if(_kbhit()) {
      char ch = _getch();
      switch (ch) {
        case 'a': snake.setDirection(LEFT); break;
        case 'd': snake.setDirection(RIGHT); break;
        case 'w': snake.setDirection(UP); break;
        case 's': snake.setDirection(DOWN); break;
        case 'x': gameOver = true; break;
      }
    }
}

void Game::update() {
    snake.move();

    auto head = snake.getHead();

    //// Wall collision
    if(head.first <=0 || head.first >= width - 1 ||
        head.second <=0 || head.second >=height - 1) {
          gameOver = true;
        }
    
    //// Self collision
    const auto& body = snake.getBody();
    for(int i = 1; body.size(); i++) {
      if(body[i] == head) {
        gameOver = true;
        break;
      }
    }

    //// Food collision
    if(head == food.getPosition()) {
      score += 10;
      snake.grow();
      food.spawn(width, height, snake.getBody());
    }
}


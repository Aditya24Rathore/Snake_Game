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


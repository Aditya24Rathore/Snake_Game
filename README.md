# 🐍 Snake Game in C++

A **console-based Snake Game** developed using **C++**, following **Object-Oriented Programming (OOP)** principles and STL. The project demonstrates clean code structure, real-time game loop handling, and efficient data structures.

---

## 📜 LICENSE
This project is licensed under the MIT License.

---

## 📌 Features

* Classic Snake gameplay in the console
* Real-time movement using keyboard input
* Snake grows on eating food
* Collision detection (walls & self)
* Score tracking
* Modular and readable code structure

---

## 🧠 Concepts Used

* **Object-Oriented Programming (OOP)**

  * Classes, encapsulation, separation of concerns
* **STL Containers**

  * `deque` for snake body management
  * `pair` for coordinates
* **Game Loop Design**

  * Input → Update → Render
* **File Structure & Modularity**
* **Windows Console APIs**

  * `_kbhit()`, `_getch()`, `Sleep()`

---

## 🗂️ Project Structure

```
Snake_Game/
│
├── main.cpp        // Entry point
├── Game.h          // Game controller (declaration)
├── Game.cpp        // Game logic & loop
├── Snake.h         // Snake class (declaration)
├── Snake.cpp       // Snake movement logic
├── Food.h          // Food class (declaration)
├── Food.cpp        // Food spawn logic
└── README.md
```

---

## 🎮 Controls

* **W** → Move Up
* **S** → Move Down
* **A** → Move Left
* **D** → Move Right
* **X** → Exit Game

---

## ▶️ How to Compile & Run

### Prerequisites

* C++ Compiler (`g++` – MinGW / MSYS2)
* VS Code (recommended)

### Compile

```bash
g++ main.cpp Game.cpp Snake.cpp Food.cpp -o snake
```

### Run

```bash
./snake
```

---

## 📄 main.cpp (Minimal Entry Point)

```cpp
#include "Game.h"

int main() {
    Game game;
    game.run();
    return 0;
}
```

---

## 🚀 Possible Enhancements

* High score storage using file handling
* Pause / Resume functionality
* Increasing difficulty levels
* Obstacles inside the game area
* Graphics-based version using **SFML**

---

## 🧾 Resume Description

> Developed a console-based Snake Game using **C++ and STL**, implementing **OOP principles**, real-time game loop, collision detection, and dynamic score tracking. Designed a modular project structure with clean separation between game logic, snake behavior, and food generation.

---

## 🛠️ Tools Used

* **Language:** C++
* **Editor:** Visual Studio Code
* **Compiler:** g++ (MinGW / MSYS2)
* **Platform:** Windows Console

---

## 🙌 Author

**Aditya Rathore**
B.Tech CSE Student | C++ | DSA | OOP

---

⭐ If you like this project, feel free to improve it and build on top of

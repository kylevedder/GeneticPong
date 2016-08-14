#include "gameboard.h"
#include <iostream>

namespace genetic {
Gameboard::Gameboard(int width, int height, Paddle &leftRef, Paddle &rightRef,
                     Ball &ballRef)
    : left(leftRef), right(rightRef), ball(ballRef) {
  this->width = width;
  this->height = height;
  this->isFinished = false;
}

void Gameboard::Print() {
  std::cout << "Gameboard:" << std::endl;
  for (int y = 0; y <= height; y++) {
    for (int x = 0; x <= height; x++) {
      if (x == ball.GetX() && y == ball.GetY()) {
        std::cout << "B";
      } else if (x == left.GetX() && y >= left.GetY() &&
                 y <= left.GetY() + left.GetSize()) {
        std::cout << "|";
      }

      else if (x == right.GetX() && y >= right.GetY() &&
               y <= right.GetY() + right.GetSize()) {
        std::cout << "|";
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
  std::cout << "Ball: " << std::endl;
  ball.Print();
}

bool Gameboard::IsFinished() { return isFinished; }

void Gameboard::Update() {
  ball.Update();
  if (BallCollides(left) || BallCollides(right)) {
    ball.Bounce();
    std::cout << "Collide!" << std::endl;
  } else {
    std::cout << "No collide" << std::endl;
  }
}

bool Gameboard::BallCollides(Paddle &paddle) {
  return paddle.GetX() == ball.GetX() && paddle.GetY() <= ball.GetY() &&
         paddle.GetY() + paddle.GetSize() >= paddle.GetY();
}

int Gameboard::GetWidth() { return width; }

int Gameboard::GetHeight() { return height; }
}

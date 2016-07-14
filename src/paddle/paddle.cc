#include "paddle.h"
#include <iostream>

namespace genetic {
Paddle::Paddle(int x, int y) {
  this->xPos = x;
  this->yPos = y;
}

void Paddle::Print() {
  std::cout << "Paddle: X:" << GetX() << " Y:" << GetY() << std::endl;
}

void Paddle::Move(Direction direction) {
  switch (direction) {
  case UP:
    yPos -= 1;
    break;
  case DOWN:
    yPos += 1;
    break;
  }
}

int Paddle::GetX() { return xPos; }

int Paddle::GetY() { return yPos; }
}

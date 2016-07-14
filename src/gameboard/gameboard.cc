#include "gameboard.h"
#include <iostream>

namespace genetic {
Gameboard::Gameboard(int startX, int startY, int xVelocity, int yVelocity,
                     int width, int height, Paddle &leftRef, Paddle &rightRef)
    : left(leftRef), right(rightRef) {
  this->xPos = startX;
  this->yPos = startY;
  this->xVelocity = xVelocity;
  this->yVelocity = yVelocity;
  this->width = width;
  this->height = height;
  this->isFinished = false;
}

void Gameboard::Print() {
  std::cout << "Gameboard:" << std::endl;
  std::cout << "Width: " << width << std::endl;
  std::cout << "Height: " << height << std::endl;
  std::cout << "Ball X: " << xPos << std::endl;
  std::cout << "Ball Y: " << yPos << std::endl;
  std::cout << "X Vel: " << xVelocity << std::endl;
  std::cout << "Y Vel: " << yVelocity << std::endl;
}

int Gameboard::GetBallX() { return xPos; }

int Gameboard::GetBallY() { return yPos; }

bool Gameboard::IsFinished() { return isFinished; }

void Gameboard::Update() {}
}

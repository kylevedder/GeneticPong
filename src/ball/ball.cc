#include "ball.h"
#include <iostream>

namespace genetic {
  
Ball::Ball(int x, int y, int xVel, int yVel, int xMax, int yMax) {
  this->xPos = x;
  this->yPos = y;
  this->xVel = xVel;
  this->yVel = yVel;
  this->xMax = xMax;
  this->yMax = yMax;
}

void Ball::Print() {
  std::cout << "Ball: X: " << xPos << " Y: " << yPos << " X Vel: " << xVel
            << " Y Vel: " << yVel << std::endl;
}

void Ball::Update() {
  if (yPos + yVel > yMax || yPos + yVel < 0) {
    yVel *= -1;
    yPos += yVel;
  }
}

int Ball::GetX() { return xPos; }

int Ball::GetY() { return yPos; }
}

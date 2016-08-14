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
  // Swap Y Value on wall collide
  yPos += yVel;
  xPos += xVel;
  if (yPos > yMax || yPos + yVel < 0) {
    std::cout << "Wall Bounce" << std::endl;
    yVel *= -1;
    // Ball remains in same y for a tick
    yPos += yVel;
  }
}

void Ball::Bounce() { xVel *= -1; }

int Ball::GetX() { return xPos; }

int Ball::GetY() { return yPos; }
}

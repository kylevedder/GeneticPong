#include "ball/ball.h"
#include "gameboard/gameboard.h"
#include "paddle/paddle.h"
#include <iostream>

#define BOARD_WIDTH (20)
#define BOARD_HEIGHT (20)

using namespace genetic;

int main() {
  std::cout << "Starting..." << std::endl;

  Paddle leftPaddle = Paddle(0, 0, 5);
  Paddle rightPaddle = Paddle(10, 0, 5);
  Ball ball =
      Ball(BOARD_WIDTH / 2, BOARD_HEIGHT / 2, 1, 1, BOARD_WIDTH, BOARD_HEIGHT);

  Gameboard gameboard =
      Gameboard(BOARD_WIDTH, BOARD_HEIGHT, leftPaddle, rightPaddle, ball);
  gameboard.Print();
  return 0;
}

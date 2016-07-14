#include "gameboard/gameboard.h"
#include "paddle/paddle.h"
#include <iostream>

#define BOARD_WIDTH (20)
#define BOARD_HEIGHT (20)

using namespace genetic;

int main() {
  std::cout << "Starting..." << std::endl;

  Paddle leftPaddle = Paddle(0, 0);
  Paddle rightPaddle = Paddle(10, 0);

  Gameboard gameboard =
      Gameboard(0, 0, 0, 0, BOARD_WIDTH, BOARD_HEIGHT, leftPaddle, rightPaddle);
  gameboard.Print();
  return 0;
}

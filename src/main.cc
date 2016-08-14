#include "ball/ball.h"
#include "gameboard/gameboard.h"
#include "paddle/paddle.h"
#include <iostream>

#define BOARD_WIDTH (20)
#define BOARD_HEIGHT (20)

using namespace genetic;

int main() {
  std::cout << "Starting..." << std::endl;

  Paddle leftPaddle = Paddle(0, BOARD_HEIGHT / 2, 5);
  Paddle rightPaddle = Paddle(BOARD_WIDTH, BOARD_HEIGHT / 2, 10);
  Ball ball =
      Ball(BOARD_WIDTH / 2, BOARD_HEIGHT / 2, 1, 1, BOARD_WIDTH, BOARD_HEIGHT);

  Gameboard gameboard =
      Gameboard(BOARD_WIDTH, BOARD_HEIGHT, leftPaddle, rightPaddle, ball);
  gameboard.Print();
  for (int i = 0; i < 15; i++) {
    std::cout << "Loop Count: " << i << std::endl;
    gameboard.Update();
    gameboard.Print();
  }
  return 0;
}

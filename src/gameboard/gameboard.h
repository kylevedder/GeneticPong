#ifndef _GAMEBOARD_H_
#define _GAMEBOARD_H_

#include "../ball/ball.h"
#include "../paddle/paddle.h"

namespace genetic {
class Gameboard {
public:
  Gameboard(int width, int height, Paddle &left, Paddle &right, Ball &ball);
  void Print();
  bool IsFinished();
  int GetBallX();
  int GetBallY();
  int GetWidth();
  int GetHeight();
  void Update();

private:

  bool BallCollides(Paddle &padde);

  int xPos, yPos, xVelocity, yVelocity, width, height;
  bool isFinished;
  Paddle &left;
  Paddle &right;
  Ball &ball;
};
}
#endif /* ifndef _GAMEBOARD_H_ */

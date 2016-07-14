#ifndef _GAMEBOARD_H_
#define _GAMEBOARD_H_

#include "../paddle/paddle.h"

namespace genetic {
class Gameboard {
public:
  void Print();
  Gameboard(int startX, int startY, int xVelocity, int yVelocity, int width,
            int height, Paddle &left, Paddle &right);
  int GetBallX();
  int GetBallY();
  bool IsFinished();
  void Update();

private:
  int xPos, yPos, xVelocity, yVelocity, width, height;
  bool isFinished;
  Paddle &left;
  Paddle &right;
};
}
#endif /* ifndef _GAMEBOARD_H_ */

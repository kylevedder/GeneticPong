#ifndef _BALL_H_
#define _BALL_H_

namespace genetic {
class Ball {
public:
  void Print();
  Ball(int x, int y, int xVel, int yVel, int xMax, int yMax);

  int GetX();
  int GetY();

  void Update();

private:
  int xPos, yPos, size, xVel, yVel, xMax, yMax;
};
}
#endif /* ifndef _BALL_H_ */

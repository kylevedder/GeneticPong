#ifndef _PADDLE_H_
#define _PADDLE_H_

namespace genetic {
enum Direction { UP, DOWN };
class Paddle {
public:
  void Print();
  Paddle(int x, int y);
  void Move(Direction direction);
  int GetX();
  int GetY();

private:
  int xPos;
  int yPos;
};
}
#endif /* ifndef _PADDLE_H_ */

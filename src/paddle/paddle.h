#ifndef _PADDLE_H_
#define _PADDLE_H_

namespace genetic {
enum Direction { UP, DOWN };
class Paddle {
public:
  Paddle(int x, int y, int size);
  void Print();
  void Move(Direction direction);
  int GetX();
  int GetY();
  int GetSize();

private:
  int xPos, yPos, size;
};
}
#endif /* ifndef _PADDLE_H_ */

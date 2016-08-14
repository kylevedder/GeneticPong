#ifndef _NODE_H_
#define _NODE_H_

#include <list>
#include <map>

namespace genetic {
class Node {
public:
  Node();
  void Print();
  void AddLink(Node &node);

private:
  std::map<std::string, Node> linkMap;
};
}
#endif /* ifndef _NODE_H_ */

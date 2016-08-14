#include "node.h"
#include <iostream>

namespace genetic {
Node::Node() {}
void Node::Print() {
  std::cout << "Node" << std::endl;
  std::cout << "Num Children: " << linkMap.size() << std::endl;
}

// TODO (kvedder): Add a keying system.
void Node::AddLink(Node &nodeToAdd) { linkMap["foo"] = nodeToAdd; }
}

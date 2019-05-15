template<typename T>
class Node
{
public:
  Node *prev = nullptr;
  Node *next = nullptr;
  T value;
};

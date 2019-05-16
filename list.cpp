#include "node.h"

template <typename T>
class LinkedList
{
  Node<T> *m_begin;


  int m_size = 0;
public:
  LinkedList ()
  {
  }
  int size ()
  {
  }
  
  /*Inserts node with input value to specified position*/
  Node<T> *insert (T value, int pos) 
  {
  }

  /*Inserts node with input value in the end of the list */
  Node<T> *push_back (T value)
  {
  }
  
  /*Finds first node from the begin with given value*/
  Node<T> *find (T value)
  {
  }
  
  /*removes input node*/
  void remove (Node<T> *node)
  {
  }

  /*Reverses the list*/
  void reverse ()
  {
  }
  
  /*Clears the list*/
  void clear ()
  {
  }
  
  /*Prints list to stdout*/
  void print_list ()
  {
  }

  ~LinkedList ()
  {
  }
};

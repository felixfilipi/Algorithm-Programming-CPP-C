#include "include/LIFOLL.hpp"
#include "include/FIFOLL.hpp"
#include "include/SingleLL.hpp"

int main (int argc, char *argv[])
{
  SingleLL *sll = new SingleLL(5);
  sll->insert(4);
  sll->insert(3);
  sll->insert(2);
  sll->insert(1);
  sll->insert(0);
  std::cout << "Single Linked List = " << std::endl;
  sll->display();

  LIFOLL *lfll = new LIFOLL(5);
  lfll->push(4);
  lfll->push(3);
  lfll->push(2);
  lfll->push(1);
  lfll->push(0);
  lfll->pop();
  std::cout << "Last In First Out (Stack) = " << std::endl;
  lfll->display();

  FIFOLL *ffll = new FIFOLL(5);
  ffll->queue(4);
  ffll->queue(3);
  ffll->queue(2);
  ffll->queue(1);
  ffll->queue(0);
  ffll->dequeue();
  std::cout << "First In First Out (Queue) = " << std::endl;
  ffll->display();

  delete sll;
  delete lfll;
  delete ffll;
  return 0;
}

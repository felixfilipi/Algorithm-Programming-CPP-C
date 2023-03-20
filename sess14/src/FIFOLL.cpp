#include "../include/FIFOLL.hpp"

FIFOLL::FIFOLL(int data){
  HEAD = create_node(data);
  TAIL = HEAD;
};

void FIFOLL::queue(int data){
  struct Node* new_node = create_node(data);
  new_node->next = HEAD;
  HEAD->prev = new_node;
  HEAD = new_node;
};

void FIFOLL::dequeue(){
  struct Node* ptr = TAIL;
  TAIL = TAIL->prev;
  delete ptr;
};

void FIFOLL::display(){
  struct Node* ptr = HEAD;
  while(ptr != TAIL->next){
    std::cout << ptr->data << " ";
    ptr = ptr->next;
  };
  std::cout << std::endl;
};


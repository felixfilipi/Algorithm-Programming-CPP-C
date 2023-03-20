#include "../include/LIFOLL.hpp"

LIFOLL::LIFOLL(int data){
  HEAD = create_node(data);
};

void LIFOLL::push(int data){
  struct Node* new_node = create_node(data);
  new_node->prev = HEAD;
  HEAD->next = new_node;
  HEAD = new_node;
}

void LIFOLL::pop(){
  struct Node* ptr = HEAD;
  HEAD = ptr->prev;
  delete ptr;
}

void LIFOLL::display(){
  struct Node* ptr = HEAD;
  while(ptr != NULL){
    std::cout << ptr->data << " ";
    ptr = ptr->prev;
  };
  std::cout << std::endl;
}

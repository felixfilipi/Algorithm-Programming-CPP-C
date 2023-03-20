#include "../include/SingleLL.hpp"

SingleLL::SingleLL(int data){
  HEAD = create_node(data);
};

void SingleLL::insert(int data){
  struct Node* new_node = create_node(data);
  new_node->next = HEAD;
  HEAD = new_node;
};

void SingleLL::display(){
  struct Node* ptr = HEAD;
  while(ptr != NULL){
    std::cout << ptr->data << " ";
    ptr = ptr->next;
  };
  std::cout << std::endl;
};


#include<iostream>

class LIFOLL{
private:
  struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
  };
  struct Node* create_node(int data){
    struct Node* new_node = new Node();
    new_node->prev = NULL;
    new_node->next = NULL;
    new_node->data = data;
    return new_node;
  };
  struct Node* HEAD;

public:
  LIFOLL(int);
  void push(int);
  void pop();
  void display();
};

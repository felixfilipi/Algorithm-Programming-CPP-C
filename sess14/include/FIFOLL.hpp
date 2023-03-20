#include<iostream>

class FIFOLL{
private:
  struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
  };
  struct Node* HEAD;
  struct Node* TAIL;
  struct Node* create_node(int data){
    struct Node* new_node = new Node();
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->data = data;
    return new_node;
  };

public:
  FIFOLL(int);
  void queue(int);
  void dequeue();
  void display();
};

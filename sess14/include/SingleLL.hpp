#include<iostream>

class SingleLL{
private:
  struct Node{
    int data;
    struct Node* next;
  };

  struct Node* create_node(int data){
    struct Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
  };

  struct Node* HEAD;

public:
  SingleLL(int);
  void insert(int data);
  void display();
};

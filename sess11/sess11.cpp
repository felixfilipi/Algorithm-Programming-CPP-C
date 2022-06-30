#include<iostream>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;

void push_back(int new_data){
  struct Node* new_node = new(struct Node);
  struct Node* ptr = head;
  new_node->data = new_data;
  new_node->next = head;
  if(head != NULL){
    while(ptr->next != head){
      ptr = ptr->next;
    }
    ptr->next = new_node;
  }else{
    new_node->next = new_node;
  }
  head = new_node;

  delete new_node->next;
  delete new_node;
  delete ptr;
}

// show that the linked list is circular
void display_loop(){
  struct Node* ptr = head;
  while(ptr != NULL){
    std::cout << ptr->data << " ";
    ptr = ptr->next;
  }

  delete ptr;
}

void display_once(){
  struct Node* ptr = head;
  do{
    std::cout << ptr->data << " ";
    ptr = ptr->next;
  }while(ptr != head);
  
  delete ptr;
}

int main(){
  push_back(3);
  push_back(2);
  push_back(1);
  push_back(0);
  display_once();
  return 0;
}

#include<iostream>

class CircularDoubleLL{
  private:
    struct Node{
      int data;
      struct Node* prev;
      struct Node* next; 
    };
    struct Node* head = NULL;
    struct Node* tail = NULL;
    int count = 0;

  public:
    struct Node* create_node(int new_data){
      count++;
      struct Node* new_node = new(struct Node);
      new_node->data = new_data;
      new_node->next = NULL;
      new_node->prev = NULL;
      return new_node;
    }

    void push_front(int);
    void push_back(int);
    void push_pos(int, int);
    void delete_pos(int);
    void search(int);
    void update(int, int);
    void display();
};

void CircularDoubleLL::push_front(int new_data){
  struct Node* new_node = create_node(new_data);
  if(head == tail && head == NULL){
    head = new_node;
    tail = new_node;
    head->next = NULL;
    head->prev = NULL;
    tail->next = NULL;
    tail->prev = NULL;
  }else{
    head->prev = new_node;
    new_node->next = head;
    new_node->prev = tail;
    tail->next = new_node;
    head = new_node;
  }
}

void CircularDoubleLL::push_back(int new_data){
  struct Node* new_node = create_node(new_data);
  if(head == tail && head == NULL){
    head = new_node;
    tail = new_node;
    head->next = NULL;
    head->prev = NULL;
    tail->next = NULL;
    tail->prev = NULL;
  }else{
    tail->next = new_node;
    new_node->prev = tail;
    new_node->next = head;
    head->prev = new_node;
    tail = new_node;
  }
}

void CircularDoubleLL::push_pos(int index, int new_data){
  if(head == tail && head == NULL){
    if(index == 1 || index == 0){
      struct Node* new_node = create_node(new_data);
      head = new_node;
      tail = new_node;
      head->prev = NULL;
      head->next = NULL;
      tail->next = NULL;
      tail->prev = NULL;
    }else{
      std::cout << "Error : Index out of range" << std::endl;
      return;
    }
  }else{
    if(index <= count){  
      struct Node* new_node = create_node(new_data);
      struct Node* head_ptr = head;
      struct Node* prev_ptr;
      for(int i = 2; i <= index; i++){
        head_ptr = head_ptr->next;
      }
      prev_ptr = head_ptr->prev;
      prev_ptr->next = new_node;
      new_node->prev = prev_ptr;
      new_node->next = head_ptr;
      head_ptr->prev = new_node;
    }else{
      std::cout << "Error : Index out of range" << std::endl;
    }
  }
}

void CircularDoubleLL::delete_pos(int index){
  if(head == tail && head == NULL){
    std::cout << "Error : Index out of range" << std::endl;
    return;
  }else{
    if(index > count){
      std::cout << "Error : Index out of range" << std::endl;
      return;
    }else{
      struct Node* head_ptr = head;
      if(index == 1){
        count--;
        tail->next = head_ptr->next;
        head_ptr->next->prev = tail->next;
        head = head_ptr->next;
        delete(head_ptr);
        return;
      }else if(index == count){
        tail = head;
      }else{
        struct Node* prev_ptr;
        for(int i = 1; i <= index; i++){
          head_ptr = head_ptr->next;
        }
        prev_ptr = head_ptr->prev;
        prev_ptr->next = head_ptr->next;
        head_ptr->next->prev = prev_ptr;
      }
      count--;
      delete(head_ptr);
    }
  }
}

void CircularDoubleLL::search(int data){
  struct Node* ptr = head;
  bool status = false;
  if(head == tail && head == NULL){
    std::cout << "Error : List is empty" << std::endl;
    return;
  }else{
    for(int i = 1; i <= count; i++){
      if(ptr->data == data){
        std::cout << "Data : " << data << " is on " << i << " position" << std::endl;
        status = true;
        break;
      }else{
        ptr = ptr->next;
      }
    }
    if(status == false){
      std::cout << "Data : " << data << " not in the list" << std::endl;
    }
  }
}

void CircularDoubleLL::update(int index, int data){
  struct Node* ptr = head;
  bool status = false;
  if(head == tail && head == NULL){
    std::cout << "Error : List is empty" << std::endl;
    return;
  }else{
    for(int i = 1; i <= count; i++){
      if(index == i){
        ptr->data = data;
        status = true;
        break;
      }else{
        ptr = ptr->next;
      }
    }
    if(status == false){
      std::cout << "Index : " << index << " not in the list" << std::endl;
    }
  }
}

void CircularDoubleLL::display(){
  struct Node* ptr = head;
  do{
    std::cout<< ptr->data << " ";
    ptr = ptr->next;
  }while(ptr != head);
}

int main(){
  CircularDoubleLL cdll;
  cdll.push_back(5);
  cdll.push_back(6);
  cdll.push_back(7);
  cdll.push_front(2);
  cdll.push_front(1);
  cdll.push_pos(3, 3);
  cdll.push_pos(4, 4);
  cdll.push_back(8);
  cdll.push_back(9);
  cdll.delete_pos(7);
  cdll.search(4);
  cdll.search(10);
  cdll.update(5, 15);
  cdll.display();
  return 0;
}

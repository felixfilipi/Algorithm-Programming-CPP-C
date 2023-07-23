#include<iostream>

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

Node* newNode(int data){
    Node *node = new Node();
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void push_back(Node* node, int data){
    if(node == NULL){
        node->data = data;
    }else{
        Node* ptr = node;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newNode(data);
        ptr->next->prev = ptr->next;
    };
};

void print_ll(Node* node){
    
    Node* ptr = node;
    while(ptr->next != NULL){
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << ptr->data << " ";
}

int main(){
    Node* head = newNode(1);
    push_back(head, 2);
    push_back(head, 4);
    push_back(head, 6);
    print_ll(head);
}
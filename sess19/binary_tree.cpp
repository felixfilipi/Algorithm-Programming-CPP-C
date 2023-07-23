#include<iostream>
#include<list>

class BTree{
  public:
  int data;
  BTree* left;
  BTree* right;
};

BTree* newNode(int data){
  BTree* bt = new BTree();
  bt->data = data;
  bt->left = NULL;
  bt->right = NULL;
  return bt;
};

int height(BTree* root){
  if(root == NULL){
    return 0;
  }

  int lheight = height(root->left);
  int rheight = height(root->right);
  if(lheight > rheight){
    return (lheight + 1);
  }else{
    return (rheight + 1);
  }
};

void printCurrLevel(BTree* root, int level){
  if(root == NULL){
    return;
  }

  if(level == 1){
    std::cout << root->data << " ";
  }else if(level > 1){
    printCurrLevel(root->left, level - 1);
    printCurrLevel(root->right, level - 1);
  }
};

void printLevelOrder(BTree* root){
  if(root == NULL){
    return;
  }

  int h = height(root);
  for(int i = 0 ; i < h; i++){
    printCurrLevel(root, i);
  }
};

void printInOrder(BTree* root){
  if(root == NULL){
    return;
  }

  printInOrder(root->left);
  std::cout << root->data << " ";
  printInOrder(root->right);
};

void printPreOrder(BTree* root){
  if(root == NULL){
    return;
  }

  std::cout << root->data << " ";
  printPreOrder(root->left);
  printPreOrder(root->right);
}

void printPostOrder(BTree* root){
  if(root == NULL){
    return;
  }

  printPostOrder(root->left);
  printPostOrder(root->right);
  std::cout << root->data << " ";
}

void insert_data(BTree* root, int data){
  std::list<BTree*> queue;
  queue.push_back(root);

  while(!queue.empty()){
    BTree* front = queue.front();
    queue.pop_front();
    if(front->left == NULL){
      front->left = newNode(data);
      return;
    }else{
      queue.push_back(front->left);
    }

    if(front->right == NULL){
      front->right = newNode(data);
      return;
    }else{
      queue.push_back(front->right);
    }
  }
};

int main(){
    BTree* bt = newNode(1);
    bt->left = newNode(2);
    bt->right = newNode(3);
    bt->left->left = newNode(4);
    bt->left->right = newNode(5);
    insert_data(bt, 6);
    insert_data(bt, 7);

    std::cout << "Level order traversal of binary tree" << std::endl;
    printLevelOrder(bt);
    std::cout << std::endl;
    
    std::cout << "InOrder = ";
    printInOrder(bt);
    std::cout << std::endl;
    
    std::cout << "PreOrder = ";
    printPreOrder(bt);
    std::cout << std::endl;

    std::cout << "PostOrder = ";    
    printPostOrder(bt);
    std::cout << std::endl;
}


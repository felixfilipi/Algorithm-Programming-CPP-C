#include<iostream>
#include<vector>
#include<queue>

class Tree{
    public:
    int data;
    std::vector<Tree*> child;
};

Tree* newNode(int data){
    Tree* tr = new Tree();
    tr->data = data;
    return tr;
}

void LevelOrderTraversal(Tree* root){
    std::queue<Tree*> queue;
    queue.push(root);
    std::cout << "Traversal result = ";
    while(!queue.empty()){
        Tree* front = queue.front();
        queue.pop();
        std::cout << front->data << " ";
        for(int i = 0; i < front->child.size(); i++){
            queue.push(front->child[i]);
        }
    }
    std::cout << std::endl;
}

int main(){
    Tree* root = newNode(10);
    (root->child).push_back(newNode(2));
    (root->child).push_back(newNode(34));
    (root->child).push_back(newNode(56));
    (root->child).push_back(newNode(100));
    (root->child[0]->child).push_back(newNode(77));
    (root->child[0]->child).push_back(newNode(88));
    (root->child[2]->child).push_back(newNode(1));
    (root->child[3]->child).push_back(newNode(7));
    (root->child[3]->child).push_back(newNode(8));
    (root->child[3]->child).push_back(newNode(9));
  
    std::cout << "Level order traversal Before Mirroring\n";
    LevelOrderTraversal(root);
   
    return 0;
}

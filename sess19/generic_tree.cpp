#include<iostream>
#include<vector>
#include<algorithm>
#include<list>

class Tree{
    public:
    int data;
    std::vector<Tree*> child;
};

Tree* newNode(int data){
    Tree* t = new Tree();
    t->data = data;
    return t;
};

void LevelOrderTraversal(Tree* root){
    std::list<Tree*>queue;
    queue.push_back(root);
    while(!queue.empty()){
        int level_size = queue.size();
        while(level_size > 0){
            Tree* front = queue.front();
            queue.pop_front();
            std::cout << front->data << " ";
            for(auto c : front->child){
                queue.push_back(c);
            }
            level_size--;
        }
        std::cout << std::endl;
    }
}

void insert_node(Tree* root, int data, int parent){
    std::list<Tree*>queue;
    queue.push_back(root);
    while(!queue.empty()){
        int level_size = queue.size();
        while(level_size > 0){
            Tree* front = queue.front();
            queue.pop_front();

            if(front->data == parent){
                front->child.push_back(newNode(data));
            }

            for(auto c : front->child){
                queue.push_back(c);
            }
            level_size--;
        }
    }
};

int find_node_level(Tree* root, int data){
    std::list<Tree*>queue;
    queue.push_back(root);
    int level = 1;
    while(!queue.empty()){
        int level_size = queue.size();
        while(level_size > 0){
            Tree* front = queue.front();
            queue.pop_front();
            if(front->data == data){
                return level;
            }

            for(auto c : front->child){
                queue.push_back(c);
            }
            level_size--;
        }
        level++;
    }
    return -1;
}

std::vector<int> find_some_data(Tree* root, int generation, bool asc, int size){
    std::list<Tree*>queue;
    std::vector<int>tmp_res, res;
    queue.push_back(root);
    int level = 1;
    while(!queue.empty()){
        int level_size = queue.size();
        while(level_size > 0){
            Tree* front = queue.front();
            queue.pop_front();

            if(level == generation){
                tmp_res.push_back(front->data);
            }

            for(auto c : front->child){
                queue.push_back(c);
            };
            level_size--;
        }
        level++;
    }

    if(asc){
        std::sort(tmp_res.begin(), tmp_res.end());
        for(int i = 0; i < size; i++){
            if(i < tmp_res.size()){
                res.push_back(tmp_res[i]);
            }else{
                res.push_back(-1);
            }
        }
    }else{
        std::sort(tmp_res.begin(), tmp_res.end(), std::greater<>());
        for(int i = 0; i < size; i++){
            if(i < tmp_res.size()){
                res.push_back(tmp_res[i]);
            }else{
                res.push_back(-1);
            }
        }
    };

    return res;
}

void print_result(int level, std::vector<int> data){
    std::cout << "Data from generation " << level << " = ";
    for(auto d : data){
        std::cout << d << " ";
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
    insert_node(root, 1000, 100);
    insert_node(root, 1001, 9);
    insert_node(root, 1000000, 1001);
    insert_node(root, 100101010, 9);
  
    std::cout << "Level order traversal Before Mirroring\n";
    LevelOrderTraversal(root);

    int find_query = 100101010;
    int lvl = find_node_level(root, find_query);
    std::cout << std::endl << "Node " << find_query << " at level = " << lvl << std::endl;

    int generation_query = 3;
    std::vector<int> data = find_some_data(root, generation_query, true, 3);
    print_result(generation_query, data);

    std::vector<int> data2 = find_some_data(root, 4, false, 3);
    print_result(4, data2);

    std::vector<int> data3 = find_some_data(root, 5, false, 3);
    print_result(5, data3);
    return 0;
}
// #include<iostream>
// #include<vector>
// #include<list>
// #include<algorithm>

// class Tree{
//     public:
//     int data;
//     std::vector<Tree*> child;
// };

// Tree* newNode(int data){
//   Tree *tr = new Tree();
//   tr->data = data;
//   return tr;
// };

// void LevelOrderTraversal(Tree* root){
//   std::list<Tree*>queue;
//   queue.push_back(root);
//   while(!queue.empty()){
//     int level_size = queue.size();
//     while(level_size > 0){
//       Tree* front = queue.front();
//       queue.pop_front();
//       std::cout << front->data << " ";
//       for(auto c : front->child){
//         queue.push_back(c);
//       }
//       level_size--;
//     }
//     std::cout << std::endl;
//   }
// };

// int find_node_level(Tree* root, int data){
//     std::list<Tree*>queue;
//     int level = 1;
//     queue.push_back(root);
//     while(!queue.empty()){
//         int level_size = queue.size();
//         while(level_size > 0){
//             Tree* front = queue.front();
//             queue.pop_front();
//             if(front->data == data){
//                 return level;
//             }
//             for(auto edge : front->child){
//                 queue.push_back(edge);
//             }
//             level_size--;
//         }
//         level++;
//     }
//     return -1;
// }

// void insert_node(Tree* root, int data, int parent){
//     std::list<Tree*>queue;
//     queue.push_back(root);

//     while(!queue.empty()){
//         int level_size = queue.size();
//         while(level_size > 0){
//             Tree* front = queue.front();
//             queue.pop_front();

//             if(front->data == parent){
//                 front->child.push_back(newNode(data));
//             }

//             for(auto edge : front->child){
//                 queue.push_back(edge);
//             }
//             level_size--;
//         }
//     }
// }

// std::vector<int> find_some_data(Tree* root, int generation, bool asc, int node_size){
//     std::list<Tree*> queue;
//     std::vector<int>res, tmp;
//     int level = 1;

//     queue.push_back(root);
//     while(!queue.empty()){
//         int level_size = queue.size();
//         while(level_size > 0){
//             Tree* front = queue.front();
//             queue.pop_front();
//             if(level == generation){
//                 tmp.push_back(front->data);
//             }
//             for(auto edge : front->child){
//                 queue.push_back(edge);
//             }
//             level_size--;
//         }
//         level++;
//     }

//     if(asc){
//         std::sort(tmp.begin(), tmp.end());
//         for(int i = 0; i < node_size; i++){
//             if(i < tmp.size()){
//                 res.push_back(tmp[i]);
//             }else{
//                 res.push_back(-1);
//             }
//         };
//         return res;
//     }else{
//         std::sort(tmp.begin(), tmp.end(), std::greater<>());
//         for(int i = 0; i < node_size; i++){
//             if(i < tmp.size()){
//                 res.push_back(tmp[i]);
//             }else{
//                 res.push_back(-1);
//             }
//         }
//         return res;
//     }
// }

// void print_result(int generation_query, std::vector<int> data){
//     std::cout << "Data from generation " << generation_query << " = ";
//     for(auto d : data){
//         std::cout << d << " ";   
//     }
//     std::cout << std::endl;
// }
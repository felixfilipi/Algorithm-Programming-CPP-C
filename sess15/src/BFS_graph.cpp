#include "../include/BFS_graph.hpp"

BFS_Graph::BFS_Graph(int size){
  node_size = size;
  nodes.resize(size);
};

void BFS_Graph::add_edge(int from, int to){
  nodes[from].push_back(to);
  nodes[to].push_back(from);
};

void BFS_Graph::print_graph(){
  for(int i = 0; i < node_size; i++){
    std::cout << "The adjacency list of vertex " << i << std::endl;
    for(auto node: nodes[i]){
      std::cout << "-> " << node;
    };
    std::cout << std::endl;
  }
};

void BFS_Graph::BFS(int root){
  std::vector<bool> visited;
  std::list<int> queue;

  visited.resize(node_size, false);
  queue.push_back(root);
  visited[root] = true;

  std::cout << "The connected Graph are = ";
  while(!queue.empty()){
    int front = queue.front();
    std::cout << front << " ";
    queue.pop_front();
    for(auto node : nodes[front]){
      if(visited[node] == false){
        visited[node] = true;
        queue.push_back(node);
      }
    }
  }
  std::cout << std::endl;
}

bool BFS_Graph::BFS_Shortest_Path(int front, int dest){
  
  // 1. initialize visited, queue, shortest path, and 
  // the predecesor (previous linked node, it using array because the dest
  // graph will only have 1 needed previous linked node);
  std::vector<bool> visited;
  std::list<int> queue;
  std::vector<int> path;
  int pred[node_size];

  // initialize predecesor for each as -1 to mark it as not defined yet
  for(int i = 0; i < node_size; i++){
    pred[i] = -1;
  };

  visited.resize(node_size, false);

  visited[front] = true;
  queue.push_back(front);

  std::cout << "The shortest path of your BFS = ";
  
  while(!queue.empty()){
    front = queue.front();
    queue.pop_front();

    for(auto node : nodes[front]){
      if(visited[node] == false){
        visited[node] = true;
        queue.push_back(node);
        
        // for each while, this predecesor will redefined by its front, and after
        // the node reach its destination, the predecesor will have right previous
        // node to reach the current destination.
        pred[node] = front;

        if(node == dest){
          // insert node to the stack
          path.push_back(dest);
          
          int target = dest;
          // while previous node of the target still exists, push the previous
          // node to the output path, and set the current target as this previous
          // node. (imagine recursive function)
          while(pred[target] != -1){
            path.push_back(pred[target]);
            target = pred[target];
          };
          // print the stack / the shortest path
          for(int i = path.size() - 1; i >= 0; i--){
            std::cout << path[i] << " ";
          };
          // print the distance of this shortest path.
          std::cout << std::endl << "Distance for shortest path = " << path.size() - 1 << std::endl;
          return true;
        }
      }
    }
  }
  std::cout << std::endl;
  return false;
}

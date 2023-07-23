#include<iostream>
#include<list>
#include<vector>

class BFS{
  private:
  std::vector<std::list<int>> adj;
  int graph_size;

  public:
  BFS(int size){
    adj.resize(size);
    graph_size = size;
  }  
 
  void add_edge(int from, int to){
    adj[from].push_back(to);
    adj[to].push_back(from);
  }

  void print_graph(){
    for(int i = 0; i < graph_size; i++){
      std::cout << "The edge of vertex " << i << " = ";
      for(auto edge : adj[i]){
        std::cout << edge << " ";
      }
      std::cout << std::endl;
    }
  };

  void bfs_search(int from){
    std::list<int> queue;
    std::vector<bool> visited(graph_size, false);
    queue.push_back(from);
    visited[from] = true;
    std::cout << "The connected graph = ";
    while(!queue.empty()){
      int front = queue.front();
      queue.pop_front();
      std::cout << front << " ";
      for(auto edge : adj[front]){
        if(visited[edge] == false){
          visited[edge] = true;
          queue.push_back(edge);
        }
      };
    }
    std::cout << std::endl;
  }

  void shortest_path(int from, int target){
    std::list<int> queue;
    std::vector<bool> visited(graph_size, false);
    std::vector<int> prev(graph_size, -1);
    std::vector<int> path;

    queue.push_back(from);
    visited[from] = true;
    while(!queue.empty()){
      int front = queue.front();
      queue.pop_front();
      for(auto edge : adj[front]){
        if(visited[edge] == false){
          queue.push_back(edge);
          visited[edge] = true;
          prev[edge] = front;

          if(target == edge){
            int curr = target;
            path.push_back(edge);

            while(prev[curr] != -1){
              path.push_back(prev[curr]);
              curr = prev[curr];
            }

            std::cout << "The shortest path = ";
            for(int i = path.size() - 1; i >= 0; i--){
              std::cout << path[i] << " ";
            }
            std::cout << std::endl << "The distance = " << path.size() << std::endl;
          }
        }
      }
    }
  }
};

int main(){
    BFS *b = new BFS(6);
  b->add_edge(0,1);
  b->add_edge(0,2);
  b->add_edge(2,3);
  b->add_edge(3,4);
  b->add_edge(2,5);
  b->print_graph();
  b->bfs_search(2);
  b->shortest_path(4, 0);
}

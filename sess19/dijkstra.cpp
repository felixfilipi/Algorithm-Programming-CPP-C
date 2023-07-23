#include<iostream>
#include<list>
#include<queue>
#include<climits>
#include<algorithm>
#include<vector>

typedef std::pair<int, int> iPair;
int INF = INT_MAX;

class Dijkstra{
  private:
  std::vector<std::list<iPair>> adj;
  int graph_size;

  public:
  Dijkstra(int size){
    graph_size = size;
    adj.resize(size);
  }

  void add_edge(int from, int to, int dist){
    adj[from].push_back(std::make_pair(to, dist));
    adj[to].push_back(std::make_pair(from, dist));
  }

  void print_graph(){
    for(int i = 0; i < graph_size; i++){
      std::cout << "Edge of vertex " << i << " = ";
      for(auto edge : adj[i]){
        std::cout << edge.first << " ";
      }
      std::cout << std::endl;
    }
  }

  void Dijkstra_Shortest_Path(int from, int target){
    
    std::priority_queue<iPair, std::vector<iPair>, std::greater<iPair>> pq;
    std::vector<int> distance(graph_size, INF), previous(graph_size, -1), path;

    pq.push(std::make_pair(from, 0));
    distance[from] = 0;

    while(!pq.empty()){
      iPair front = pq.top();
      pq.pop();
      int currVertex = front.first;
      int currDistance = front.second;
      for(auto edge : adj[currVertex]){
        int edgeVertex = edge.first;
        int edgeDistance = edge.second;
        if(distance[edgeVertex] > currDistance + edgeDistance){
          distance[edgeVertex] = currDistance + edgeDistance;
          previous[edgeVertex] = currVertex;
          pq.push(std::make_pair(edgeVertex, distance[currVertex]));
        }        
      }
    }

    int curr = target;
    path.push_back(curr);
    while(previous[curr] != -1){
      curr = previous[curr];
      path.push_back(curr);
    }

    std::reverse(path.begin(), path.end());

    std::cout << "The shortest path = ";
    for(auto edge : path){
      std::cout << edge << " ";
    }
    std::cout << std::endl << "The distance = " << distance[0] << std::endl;
  }
};

int main(){
    Dijkstra dg(9);
  dg.add_edge(0, 1, 4);
  dg.add_edge(0, 7, 8);
  dg.add_edge(1, 2, 8);
  dg.add_edge(1, 7, 11);
  dg.add_edge(2, 3, 7);
  dg.add_edge(2, 8, 2);
  dg.add_edge(2, 5, 4);
  dg.add_edge(3, 4, 9);
  dg.add_edge(3, 5, 14);
  dg.add_edge(4, 5, 10);
  dg.add_edge(5, 6, 2);
  dg.add_edge(6, 7, 1);
  dg.add_edge(6, 8, 6);
  dg.add_edge(7, 8, 7);
  dg.print_graph();
  dg.Dijkstra_Shortest_Path(8, 0);
  return 0;
}
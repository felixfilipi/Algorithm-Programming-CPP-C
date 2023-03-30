#include "../include/Dijkstra_graph.hpp"

Dijkstra_Graph::Dijkstra_Graph(int size){
  graph_size = size;
  adj.resize(size);
};

void Dijkstra_Graph::add_edge(int from, int to, int distance){
  adj[from].push_back(std::make_pair(distance, to));
  adj[to].push_back(std::make_pair(distance, from));
};

void Dijkstra_Graph::print_graph(){
  for(int i = 0; i < graph_size; i++){
    std::cout << "The adjacency list of vertex " << i << std::endl;
    for(auto edge : adj[i]){
      if(i == edge.second){
        std::cout << "-> " << edge.first;
      }else{
        std::cout << "-> " << edge.second;
      }
    };
    std::cout << std::endl;
  }
}

void Dijkstra_Graph::Dijkstra_Shortest_Path(int source, int destination){
  std::priority_queue<iPair, std::vector<iPair>, std::greater<iPair>> pq;
  pq.push(std::make_pair(0, source));
  std::vector<int> distance(graph_size, INF);
  std::vector<int> previous(graph_size, -1);
  distance[source] = 0;

  while(!pq.empty()){
    iPair curr = pq.top();
    pq.pop();
    
    int currVertex = curr.second;
    int currDistance = curr.first;

    if(currVertex == destination) break;

    if(distance[currVertex] != currDistance) continue;

    for(auto edge : adj[currVertex]){
      int edgeDistance = edge.first;
      int edgeVertex = edge.second;

      // the distance[edgeVertex] should be greater because we initialize
      // it with infinite
      if(distance[edgeVertex] > edgeDistance + currDistance){
        distance[edgeVertex] = currDistance + edgeDistance;
        previous[edgeVertex] = currVertex;
        pq.push(std::make_pair(distance[edgeVertex], edgeVertex));
      }
    }
  }

  std::vector<int> shortest_path;
  int currVertex = destination;
  while(previous[currVertex] != -1){
    shortest_path.push_back(currVertex);
    currVertex = previous[currVertex]; 
  };

  shortest_path.push_back(source);
  std::reverse(shortest_path.begin(), shortest_path.end());

  if(shortest_path.empty()){
    std::cout << "There's no path from " << source << " to " << destination << std::endl;
  }else{
    std::cout << "Shortest path from " << source << " to " << destination << " = " << std::endl;
    for(auto vertex : shortest_path){
      std::cout << "-> " << vertex << " ";
    };
    std::cout << std::endl;
  }
}

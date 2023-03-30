#include<list>
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<algorithm>

const int INF = INT_MAX;
typedef std::pair<int, int> iPair;

class Dijkstra_Graph{
private:
  int graph_size;
  std::vector<std::list<iPair>> adj;
public:
  Dijkstra_Graph(int);
  void add_edge(int, int, int);
  void print_graph();
  void Dijkstra_Shortest_Path(int, int);
};

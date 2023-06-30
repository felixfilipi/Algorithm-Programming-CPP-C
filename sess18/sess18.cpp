#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef std::pair<int, int> iPair;

class Graph {

private:
  vector<pair<int, iPair> > Adj;  
  vector<pair<int, iPair> > MST;
  std::vector<int> pattern;
  
public:
  
  Graph(int size){
    for(int i = 0; i <= size; i++){
      pattern.push_back(i);
    }
  };
  
  void add_edge(int from, int to, int distance){
    Adj.push_back(std::make_pair(distance, iPair(from, to)));
  };

  int find_pattern(int vertex){
    if(vertex == pattern[vertex]){
      return vertex;
    }else{
      // If not pattern, recursive to find it pattern.
      return find_pattern(pattern[vertex]);
    }
  }

  void union_set(int from, int to){
    pattern[from] = pattern[to];
  };

  void print_mst(){
    std::cout << "Edge : Weight" << std::endl;
    for(auto path : MST){
      std::cout << path.second.first << " - " << path.second.second << " : " << path.first << std::endl;
    }    
  }
  
  void kruskal(){
    std::sort(Adj.begin(), Adj.end());  // order distance asc
    for (auto edge : Adj) {
      int from_result = find_pattern(edge.second.first);
      int to_result = find_pattern(edge.second.second);
      if (from_result != to_result) {
        MST.push_back(edge);  // add to tree
        union_set(from_result, to_result);
      }
    }
  };
};

int main() {
  Graph g(3);
  g.add_edge(0, 1, 2);
  g.add_edge(0, 2, 4);
  g.add_edge(1, 3, 3);
  g.add_edge(2, 3, 1);
  g.kruskal();
  g.print_mst();
  return 0;
}

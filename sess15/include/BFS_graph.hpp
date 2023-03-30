#include<iostream>
#include<vector>
#include<list>

class BFS_Graph{
private:
  int node_size;
  std::vector<std::list<int>> nodes;

public:

  // desc       : set total nodes / vertices
  BFS_Graph(int);
  
  // desc       : add adjacent list / edges
  // algorithm  : simply add which nodes connected to it by push_back
  void add_edge(int, int);
  
  //desc        : print each connected graph / edge and its vertex
  void print_graph();

  //desc        : print all nodes that connected to our param root nodes
  //algorithm   : 1. add root nodes to queue and mark it as visited
  //              2. for each nodes that connected to the root/ front of queue
  //                 insert it to the queue and mark it as visited
  //              3. print each front of queue.
  void BFS(int);

  //desc        : find shortest path of unweighted graph using BFS.
  bool BFS_Shortest_Path(int, int);
};

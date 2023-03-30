#include "include/Dijkstra_graph.hpp"

int main (int argc, char *argv[])
{
  //BFS_Graph g(8);
  //int from = 2;
  //int to = 7;
  //
  //g.add_edge(0, 1);
  //g.add_edge(0, 3);
  //g.add_edge(1, 2);
  //g.add_edge(3, 4);
  //g.add_edge(4, 5);
  //g.add_edge(4, 6);
  //g.add_edge(4, 7);
  //g.add_edge(5, 6);
  //g.add_edge(6, 7);
  //g.print_graph();
 
  //g.BFS(3);
  //bool found = g.BFS_Shortest_Path(from, to);
  //if(found == true){
  //  std::cout << "Nodes " << from << " Connected To " << to << std::endl;
  //}else{
  //  std::cout << "Nodes " << from << " Not Connected To " << to << std::endl;
  //}
  
  Dijkstra_Graph dg(9);
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

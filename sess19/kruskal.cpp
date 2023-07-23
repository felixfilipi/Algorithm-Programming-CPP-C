#include<iostream>
#include<algorithm>
#include<vector>

typedef std::pair<int, int> iPair;
class Kruskal{
    private:
    std::vector<std::pair<int, iPair>> adj, mst;
    std::vector<int>pattern;

    public:
    Kruskal(int size){
        for(int i = 0; i < size; i++){
            pattern.push_back(i);
        }
    }

    void add_edge(int from, int to, int dist){
        adj.push_back(std::make_pair(dist, iPair(from, to)));
    }

    void print_mst(){
        std::cout << "From - Target | Distance" << std::endl;
        for(auto e : mst){
            std::cout << e.second.first << " - " << e.second.second << " | " << e.first << std::endl;
        }
    }

    int find_pattern(int from){
        if(from == pattern[from]){
            return from;
        }else{
            find_pattern(pattern[from]);
        }
    }

    void union_set(int from, int to){
        pattern[from] == pattern[to];
    }

    void kruskal(){
        std::reverse(adj.begin(), adj.end());
        for(auto e : adj){
            int from_res = find_pattern(e.second.first);
            int to_res = find_pattern(e.second.second);
            if(from_res != to_res){
                mst.push_back(e);
                union_set(from_res, to_res);
            }
        }
    }
};

int main() {
  Kruskal g(3);
  g.add_edge(0, 1, 2);
  g.add_edge(0, 2, 4);
  g.add_edge(1, 3, 3);
  g.add_edge(2, 3, 1);
  g.kruskal();
  g.print_mst();
  return 0;
}
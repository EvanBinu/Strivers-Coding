#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class Graph{
    public:
        map<int, vector<int>> adj;
        map<int, bool> visited;
        
        void addEdge(int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void dfs(int node){
            visited[node] = true;
            cout << node << " ";
            for(int neighbours : adj[node]){
                if(!visited[neighbours]){
                    dfs(neighbours);

                }
            }
        }
};

int main(){
    Graph g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,5);
    g.dfs(0);
}
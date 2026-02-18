#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class Graph{
    public:
        vector<vector<int>> adj;
        int V;
        Graph(int numV) {
            V = numV;          
            adj.resize(V);     
        }
        void addEdge(int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void bfs(int startNode,vector<bool>& visited){
            queue<int> q;
            visited[startNode] = true;
            q.push(startNode);
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                for(int neighbour : adj[curr]){
                    if(!visited[neighbour]){
                        visited[neighbour] = true;
                        q.push(neighbour);
                    }
                }
            }
        }
        int countComponents(){
            vector<bool> visited(V,false);
            int count = 0 ;
            for(int i = 0;i<V;i++){
                if(!visited[i]){
                    count++;
                    bfs(i,visited);

                }
            }
            return count;

        }
};
int main(){
    int V = 7;
    Graph g(V);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(4,5);

    int result = g.countComponents();
    cout << result << endl;
}

#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class Graph{
    public:
        vector<vector<int>> adj;
        int V;
        Graph(int num){
            V = num;
            adj.resize(V);
        }
        void addEdges(int u, int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        void bfs(vector<bool>& visited,int node){
            visited[node] = true;
            queue<int> q;
            q.push(node);
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                for(int neighbours : adj[curr]){
                    if(!visited[neighbours]){
                        visited[neighbours] = true;
                        q.push(neighbours);
                    }
                }
                
            }
        }
        int provinces(){
            int count = 0;
            vector<bool> visited(V,false);
            for(int i = 0;i<V;i++){
                if(!visited[i]){
                    count++;
                    bfs(visited,i);
                }
            }
            return count;
        }
};

int main(){
    int n;
    cin >> n;
    Graph g(n);
    int matrix[n][n];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(matrix[i][j]==1){
                g.addEdges(i,j);
            }
        }
    }
    int result = g.provinces();
    cout << result << endl;
}
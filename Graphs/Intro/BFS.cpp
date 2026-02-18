#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

class Graph{
    public:
        map<int,vector<int>> adj;
        void addElement(int u,int v){
            adj[u].push_back(v);
        }
        void bfs(int ele){
            map<int,bool> visited;
            queue<int> q;
            visited[ele] = true;
            q.push(ele);
            while(!q.empty()){
                int curr = q.front();
                cout << curr << " ";
                q.pop();
                for(int neighbour : adj[curr]){
                    if(!visited[neighbour]){
                        q.push(neighbour);
                        visited[neighbour] = true;
                    }
                }
            }
        }
};

int main(){
    Graph g;
    g.addElement(1,2);
    g.addElement(1,3);
    g.addElement(2,4);
    g.addElement(2,5);
    g.addElement(3,6);
    g.bfs(1);
    return 0;
}
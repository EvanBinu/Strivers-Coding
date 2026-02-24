#include<iostream>
#include<vector>
using namespace std;

bool cycleDfs(vector<vector<int>>& adj,int node,vector<bool>& visited,int parent){
    visited[node] = true;
    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            if (cycleDfs(adj, neighbour, visited, node)) return true;
        }
        else if(neighbour!=parent) return true;
    }
    return false;
    
}

bool checkComponents(vector<vector<int>>& adj,int v){
    vector<bool> visited(v,false);
    for(int i = 0;i<v;i++){
        if(!visited[i]){
            if(cycleDfs(adj,i,visited,-1)) return true;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> adj = {
        {1, 2},    // Node 0
        {0, 2},    // Node 1
        {0, 1},    // Node 2 (Cycle 0-1-2)
        {4},       // Node 3
        {3, 5},    // Node 4
        {4}        // Node 5
    };
    int v = 6;
    bool result = checkComponents(adj,v);
    cout << result << endl;
}


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool checkcycle(vector<vector<int>>& adj,int src,vector<bool>& visited){
    visited[src] = true;
    queue<pair<int,int>> q;
    q.push({src,-1});
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(auto neighbours : adj[node]){
            if(!visited[neighbours]){
                visited[neighbours] =true;
                q.push({neighbours,node});
            }
            else if(parent != neighbours){
                return true;
            }
        }
    }
    return false;
}

bool checkComponents(vector<vector<int>>& adj,int v){
    vector<bool> visited(v,false);
    for(int i = 0;i<v;i++){
        if(!visited[i]){
            if(checkcycle(adj,i,visited)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>> adj = {
        {1, 2},    // 0
        {0},       // 1
        {0, 3},    // 2
        {2}        // 3
    };
    int v = 4;
    bool result = checkComponents(adj,v);
    cout << result << endl;
}
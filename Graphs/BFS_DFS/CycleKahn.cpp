#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool CycleKahn(int v,vector<vector<int>>& adj){
    vector<int> inDegree(v,0);
    for(int i = 0;i<v;i++){
        for(int neighbour : adj[i]){
            inDegree[neighbour]++;
        }
    }
    queue<int> q;
    for(int i = 0;i<v;i++){
        if(inDegree[i] == 0) q.push(i);
    }
    int count = 0;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        count++;
        for(int neighbours : adj[curr]){
            inDegree[neighbours]--;
            if(inDegree[neighbours] == 0){
                q.push(neighbours);
            }
        }

    }
    return count!=v;
}

int main(){
    int v = 3;
    vector<vector<int>> adj(v);
    adj[0] = {1};
    adj[1] = {2};
    adj[2] = {0};
    // Node 3 has no outgoing edges

    if(CycleKahn(v, adj)) cout << "Cycle Detected" << endl;
    else cout << "No Cycle Detected" << endl;
    
    return 0;
}
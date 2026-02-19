#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int time(vector<vector<int>>& grid){
    int r = grid.size();
    int c = grid[0].size();
    queue<pair<int, int>> q;
    int freshcount = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(grid[i][j] == 2) q.push({i,j});
            else if(grid[i][j] == 1) freshcount++;
        }
    }
    if(freshcount == 0) return 0;
    int minutes = 0;
    int dr[] = {-1,1,0,0};
    int dc[] = {0,0,-1,1};
    while(!q.empty()){
        int size = q.size();
        bool changed = 0;
        for(int i = 0;i<size;i++){
            pair<int,int> curr= q.front();
            q.pop();
            for(int k = 0;k<4;k++){
                int ni = curr.first + dr[k];
                int nj = curr.second + dc[k];
                if(ni >= 0 && ni < r && nj >=0 && nj < c && grid[ni][nj] == 1){
                    grid[ni][nj] = 2;
                    freshcount--;
                    q.push({ni,nj});
                    changed =  true;
                }
            }
        }
        if(changed) minutes++;
    }
    return (freshcount == 0) ? minutes : -1;
}

int main(){
    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };
    int result = time(grid);
    cout << result << endl;
}
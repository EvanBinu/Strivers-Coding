#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row = image.size();
        int col = image[0].size();
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};
        queue<pair<int,int>> q;
        int c = image[sr][sc];
        if(c==color) return image;
        image[sr][sc] = color;
        q.push({sr,sc});
        while(!q.empty()){
            pair<int,int> curr = q.front();
            q.pop();
            for(int i = 0;i<4;i++){
                int ni = curr.first + dx[i];
                int nj = curr.second + dy[i];
                if(ni >= 0 && ni< row && nj >=0 && nj<col && image[ni][nj] == c){
                    image[ni][nj] = color;
                    q.push({ni,nj});
                }
            }
        }
        return image;
    }

int main(){
    int sr,sc,color;
    cin >> sr >> sc >> color;
    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };
    vector<vector<int>> result  = floodFill(result,sr,sc,color);
    for(int i = 0 ;i<result.size();i++){
        for(int j  = 0;j<result[0].size();j++){
            cout << result[i][j];
        }
    }
}
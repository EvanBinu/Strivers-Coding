#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int matrix[n+1][m+1]={0};
    for(int i = 0;i<m;i++){
        int c,v;
        cin >> c >> v;
        matrix[c][v] = 1;
        matrix[v][c] = 1;

    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
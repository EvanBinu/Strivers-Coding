#include<iostream>
#include<vector>
using namespace std;
int pascalElement(int r, int c) {
    long long res = 1;
    for (int i = 0; i < c; i++) {
        res = res * (r - i)/(i+1);
    }
    return res;
}
int main(){
    int n,r,c;
    cin >> n >> r >> c;
    vector<vector<int>> pascal;
    pascal.push_back({0,1,0});
    for(int i = 1;i<n;i++){
        vector<int> arr;
        arr.push_back(0);
        for (int j = 1; j< pascal[i-1].size();j++){            
            arr.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
        }
        arr.push_back(0);
        pascal.push_back(arr);
    }
    for(int i = 0;i<n;i++){
        for(int j = 1;j<pascal[i].size()-1;j++){
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Element at given index:" << pascalElement(r,c);
}
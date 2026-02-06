#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n ;
    cin >> n;
    vector<vector<int>> nums;
    for(int i = 0;i<n;i++){
        vector<int> temp;
        int a,b;
        cin >> a>> b;
        temp = {a,b};
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end(),[](const vector<int>& a,const vector<int>& b){
        return a[0] < b[0];
    });
    vector<vector<int>> result;
    result.push_back(nums[0]);
    for(int i = 1;i<n;i++){
        if(result.back()[1] >= nums[i][0]){
            result.back()[1] = max(result.back()[1],nums[i][1]);
        }
        else{
            result.push_back(nums[i]);
        }
    }
    for(int i = 0;i<result.size();i++){
        for(int j = 0;j<2;j++){
            cout << result[i][j] << " ";
        }
        cout<< endl;
    }
}
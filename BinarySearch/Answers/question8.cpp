#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >>k;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    vector<int> distance;
    distance.push_back(0);
    for(int i = 1;i<n;i++){
        distance.push_back(nums[i] - nums[i-1]);
    }
    for(int x : distance){
        cout << x << " ";
    }
}
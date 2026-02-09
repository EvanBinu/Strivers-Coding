#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    unordered_map<int,int> map;
    map[0] = 1;
    int xr = 0;
    int count = 0;
    for(int i = 0;i<n;i++){
        xr^=nums[i];
        int r = xr^k;
        if(map.find(r)!=map.end()){
            count+=map[r];
        }
        else{
            map[xr]++;
        }
    }
    cout <<count << endl;
}
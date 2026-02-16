#include<iostream>
#include<vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n,h;
    cin >> n >> h;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    int high = *max_element(nums.begin(),nums.end());
    int low = 1;
    int ans = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        long long count = 0;
        for(int i = 0;i<n;i++){
            count+=(nums[i] + mid - 1LL) / mid;
        }
        if(count <= h){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}
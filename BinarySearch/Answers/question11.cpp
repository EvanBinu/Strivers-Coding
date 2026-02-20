#include<iostream>
#include<vector>
#include <algorithm>
#include <numeric>
using namespace std;

int possible(vector<int>& nums,int d){
    int suba = 1;
    int suma = 0;
    for(int i = 0;i<nums.size();i++){
        if(suma+nums[i]<=d){
            suma+=nums[i];
        }
        else{
            suba++;
            suma = nums[i];
        }
    }
    return suba;
}

int search(vector<int>& nums,int n,int k){
    int low = *max_element(nums.begin(),nums.end());
    int high = accumulate(nums.begin(),nums.end(),0);
    while(low<=high){
        int mid = low + (high - low)/2;
        int subcount = possible(nums,mid);
        if(subcount>k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    int n,k;
    n = 3;
    k = 3;
    vector<int> nums = {3,5,1};
    int ans = search(nums,n,k);
    cout << ans << endl;

}
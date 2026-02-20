#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool canplace(vector<int>& nums, int k, int d){
    int count = 1;
    int pos = nums[0];
    for(int i = 1;i<nums.size();i++){
        if(nums[i] - pos >=d){
            count++;
            pos = nums[i];
        }
        if(count >= k) return true;
    }
    return false;

}
int search(vector<int>& nums,int k){
    sort(nums.begin(),nums.end());
    int ans = 0;
    int low = 1;
    int high = nums.back() - nums.front();
    while(low<=high){
        int mid = low + (high - low)/2;
        if(canplace(nums,k,mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;

}

int main(){
    int n,k;
    cin >> n >>k;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    int result = search(nums,k);
    cout << result<<endl;
    
}
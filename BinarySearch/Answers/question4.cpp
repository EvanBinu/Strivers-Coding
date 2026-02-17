#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool possible(vector<int>& nums,int mid,int m,int k){
    int cnt = 0;
    int n = nums.size();
    int bou = 0;
    for(int j =0;j<n;j++){
        if(nums[j] <= mid){
            cnt++;
            if(cnt == k){
                bou++;
                cnt= 0;
            }
        }
        else{
            cnt = 0;
        }
    }
    
    return bou >=m;
}

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    int high = *max_element(nums.begin(),nums.end());
    int low = *min_element(nums.begin(),nums.end());
    int ans = 0;

    while(low<=high){
        int mid = low+(high - low)/2;
        if(possible(nums,mid,k,m)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        
    }
    if(n< m*k) ans = -1;
    cout << ans << endl;
}
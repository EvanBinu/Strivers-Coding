#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divisor(vector<int>& nums,int l,int mid){
    int n = nums.size();
    int sum = 0;
    for(int j = 0;j<n;j++){
        sum+=(nums[j]+mid-1)/mid;
    }
    return sum<=l;
}

int main(){
    int n,l;
    cin >> n >> l;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    int high = *max_element(nums.begin(),nums.end());
    int low = 1;
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(divisor(nums,l,mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    cout << ans << endl;
}
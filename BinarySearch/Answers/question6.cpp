#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;

bool shipment(vector<int>& nums,int d,int mid){
    int n = nums.size();
    int sum = 0;
    int days = 1;
    for(int j = 0;j<n;j++){
        sum+=nums[j];
        if(sum>mid){
            days++;
            sum = nums[j];
        }
    }
    return days <= d;
}

int main(){
    int n,d;
    cin >> n >> d;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    int ans = -1;
    int low = *max_element(nums.begin(),nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    while(low<=high){
        int mid = low + (high - low)/2;
        if(shipment(nums,d,mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

    }
    cout << ans << endl;
}
#include<iostream>
#include<vector>
using namespace std;

int Singlesearch(vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;    
    
    if(n == 1){
        ans = nums[0];
    }
    if(nums[low] == nums[low+1]) low++;
    if(nums[high] == nums[high-1]) high--;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            ans = nums[mid];
        }
        if((mid%2 == 0 && nums[mid] == nums[mid+1]) ||(mid%2!= 0 && nums[mid] == nums[mid-1])){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    cout<< Singlesearch(nums) << endl;
    
}
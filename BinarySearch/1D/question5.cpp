#include<iostream>
#include<vector>
using namespace std;

int findceil(vector<int>& nums,int x){
    int n = nums.size();
    int low = 0;
    int high = n -1;
    int ceil = n;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] >= x){
            ceil = nums[mid];
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ceil;
}
int findfloor(vector<int>& nums,int x){
    int n = nums.size();
    int low = 0;
    int high = n -1;
    int floor = n;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] <= x){
            floor = nums[mid];
            low = mid + 1;
            
        }
        else {
            high = mid - 1;
        }
    }
    return floor;
}
int main(){
    int n,x;
    cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    
    cout << findfloor(nums,x) <<" " <<findceil(nums,x)  << endl;
}
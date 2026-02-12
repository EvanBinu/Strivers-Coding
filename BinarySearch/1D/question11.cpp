#include<iostream>
#include<vector>
using namespace std;

int rotatedminsearch(vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low<high){
        int mid = low + (high-low)/2;
        if(nums[mid] > nums[high]){
            low = mid + 1;
        }
        else{
            high = mid;
        }
    }
    
    return low;
}


int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i]; 
    }

    cout << rotatedminsearch(nums) << endl;
    
}
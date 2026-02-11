#include<iostream>
#include<vector>
using namespace std;

int rotatedsearch(vector<int>& nums,int x){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] == x){
            ans = mid;
        }
            if(nums[low] <= nums[mid]){
                if(x >= nums[low] && x < nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(x > nums[mid] && x <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
    
    return ans;
}


int main(){
    int n,x;
    cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }

    cout << rotatedsearch(nums,x) << endl;
    
}
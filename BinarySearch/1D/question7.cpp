#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    int low = 0;
    int high = n -1;
    int ans = -1;
    int count = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] == x){
            count++;
            low = mid + 1;
        }
        else if(nums[mid] > x){
            high = mid - 1;
        }
        else if(nums[mid] < x){           
            low = mid + 1;
        }
    }
    low = 0;
    high = n -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] == x){
            count++;
            high = mid - 1;
        }
        else if(nums[mid] > x){
            high = mid - 1;
        }
        else if(nums[mid] < x){           
            low = mid + 1;
        }
    }
    cout << count << endl;
}
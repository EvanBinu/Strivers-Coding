#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    int low = 0;
    int high = n -1;
    int index = -1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == k){
            index = mid;
            break;
        }
        else if(nums[mid]>k){
            mid = high - 1;
        }
        else if(nums[mid] < k) {
            mid = low + 1;
        }
    }
    cout << "Element at:" << index << endl;
}
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
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        int diff = nums[mid] - (mid+1);
        if(k>diff){
            low = mid +1;
        } 
        else{
            high = mid - 1;
        }
    }
    cout << high + k + 1 << endl; 
}
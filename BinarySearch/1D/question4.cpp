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
    int ans = n;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else{

            low = mid + 1;
        }
    }
    cout << ans << endl;
}
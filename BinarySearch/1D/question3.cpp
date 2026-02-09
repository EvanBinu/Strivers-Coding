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

        int left = 0;
        int right = n - 1;
        int index = n;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] > x){
                index = mid;
                right = mid - 1;
            }
            else{
                left = mid+1;
            }
        }
        cout << index << endl;
    }

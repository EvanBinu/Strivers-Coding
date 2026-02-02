#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0;i<n;i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    sort(nums.begin(),nums.end());
    int maxi = 0;
    int curr = 1;
    for(int i = 0;i<n-1;i++){
        if(nums[i]+1 == nums[i+1]){
            curr++;
        }
        else{
            curr=1;
        }
        maxi = max(curr,maxi);
    }
    cout << maxi << endl;

}
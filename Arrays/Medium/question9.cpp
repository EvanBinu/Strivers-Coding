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
    vector<int> result;
    for(int i = 0;i<n;i++){
        int ele = *max_element(nums.begin()+i+1,nums.end());
        if(nums[i]>ele){
            result.push_back(nums[i]);
        }
    }
    result.push_back(nums.back());

    for(int x : result){
        cout<< x << ' ';
    }
    cout << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());

    vector<vector<int>> triplets;
    for(int i = 0;i<n;i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
        int j = i +1;
        int k = n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum > 0) {
                k--;
            }
            else if(sum < 0){
                j++;
            }
            else{
                vector<int> temp = {nums[i],nums[j],nums[k]};
                triplets.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j] == nums[j-1]) j++;
                while(j<k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    for(int i = 0;i<triplets.size();i++){
        for(int j = 0;j<3;j++){
            cout << triplets[i][j] << " ";
        }
        cout << endl;
    }
}
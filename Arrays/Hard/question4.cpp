#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i = 0;i<n-3;i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
        for(int j = i +1;j<n-2;j++){
            if(j > i + 1 &&nums[j] == nums[j-1]) continue;
            int k = j+ 1;
            int h = n -1;
            while(k<h){
                int sum = nums[i] + nums[j] + nums[k] + nums[h];
                if(sum > target){
                    h--;
                }
                else if(sum < target){
                    k++;
                }
                else{
                    vector<int> temp = {nums[i] , nums[j] , nums[k] , nums[h]};
                    ans.push_back(temp);
                    h--;
                    k++;
                    while(k<h && nums[k] == nums[k-1]) k++;
                    while(k<h && nums[h] == nums[h+1]) h--;
                }
            }
        }
    }
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<4;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
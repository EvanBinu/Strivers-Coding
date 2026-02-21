#include<iostream>
#include<vector>
using namespace std;

int count(vector<int>& nums,long double mid){
    int cnt = 0;
    int n = nums.size();
    for(int i = 1;i<n;i++){
        int numdiff = (nums[i] - nums[i-1])/mid;
        if((nums[i]-nums[i-1]) == (mid*numdiff)){
            numdiff--;
        }
        cnt+=numdiff;
    }
    return cnt;
}

long double mindistanct(vector<int>& nums,int k){
    long double low = 0;
    long double high = 0;
    int n = nums.size();
    for(int i = 0;i<n-1;i++){
        if (nums[i+1] - nums[i] > high) high = nums[i+1] - nums[i];
    }
    long long diff = 1e-6;
    for(int iter = 0; iter < 100; iter++) {
        long double mid = low + (high - low) /2.0;
        int cnt = count(nums,mid);
        if(cnt > k){
            low = mid;
        }
        else high = mid;
    }
    return high;

}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;

   
    long double ans = mindistanct(arr, k);

    cout << "The answer is: " << ans << "\n";
    return 0;
}
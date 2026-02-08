#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> summationmethod(vector<int>& nums){
    long long n = nums.size();
    long long sn = (n*(n+1))/2;
    long long s2n = (n*(n+1) * (2*n+1))/6;

    long long s = 0,s2 = 0;
    for(int i = 0;i<n;i++){
        s+=nums[i];
        s2+=(long long)nums[i] * (long long)nums[i];
    }
    long long val1,val2;
    val1 = s - sn;
    val2 = s2 - s2n;
    long long val3 = val2/val1;
    long long x = (val1+val3)/2;
    long long y = (val3 - x);
    return {int(x),int(y)};

}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int,int> map;
    for(int i= 0;i<n;i++){
        cin >> arr[i];
        map[i+1] = 0;
    }
    
    for(int x : arr){
        map[x]++;
    }
    vector<int> result(2);
    for( auto [val,cnt] : map){
        if(cnt == 2){
            result[0] = val;
        }
        else if(cnt == 0){
            result[1] = val;
        }
    }
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;
    vector<int>result2;
    result2 = summationmethod(arr);
    for(int x : result2){
        cout << x << " ";
    }
    cout << endl;

    
}
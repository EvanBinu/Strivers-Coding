#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int low = 1;
    int high = n;
    int ans = -1;
    long long value;
    while(low<=high){
        int mid = low + (high - low)/2;
        value = pow(mid,m);
        if(value == n){
            ans = mid;                        
        }
        if(value < n){
            low = mid+1;
        }
        else {
            high = mid - 1;
        }

    }
    cout << ans << endl;
}
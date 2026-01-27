#include<iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int left = 0;
    int right = 0;
    int maxlen = 0;
    int sum = arr[0];
    while(right < n){
        while(left <=right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen,right-left+1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    cout << maxlen << endl;

}
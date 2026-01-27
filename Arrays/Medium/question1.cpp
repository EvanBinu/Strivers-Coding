#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n , k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int left = 0;
    int right = n - 1;
    sort(arr,arr+n);
    int sum = arr[left] + arr[right];
    bool found = false;
    
    while(left < right){
        if(sum == k){
            cout << "YES" << "("<<arr[left] << ","<<arr[right]<<")"<<endl;
            found = true;
            break;
        }
        else if(sum<k){
            left++;
        }
        else if(sum > k){
            right--;
        }
        sum = arr[left] + arr[right];
    }
    if(!found){
        cout << "NO" << endl;
    }


}
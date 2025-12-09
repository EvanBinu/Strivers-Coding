#include <iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int large = INT_MIN;
    int second = INT_MIN;
    for(int i = 0 ; i< n;i++){
        if(arr[i]>large){
            second = large;
            large = arr[i];
        }

        else if(arr[i]>second && arr[i] != large) second = arr[i];
    }
    return second;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int ans = secondLargest(arr,n);
    cout << ans << endl;
    return 0;
}
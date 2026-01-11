#include <iostream>
using namespace std;

void leftshift(int arr[],int n){
    int first = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = first;
}
void rightshift(int arr[],int n){
    int last = arr[n-1];
    for(int i = (n-2);i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = last;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    rightshift(arr,n);
    for(int x : arr){
        cout << x << " ";
    }
}
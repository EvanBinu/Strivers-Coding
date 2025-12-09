#include <iostream>
using namespace std;

bool sorted(int arr[],int n){
    int f = 0;
    for(int i = 0;i<n-1;i++){
        if(arr[i] > arr[i+1]) f++;
    }
    return f > 0 ? false : true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << sorted(arr,n) << endl;
}
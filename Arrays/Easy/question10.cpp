#include <iostream>
using namespace std;

int summation(int arr[],int n){
    int value = 0;
    for(int i = 0;i<n-1;i++){
        value+=arr[i];
    }
    int suma = (n*(n+1))/2;
    return suma - value;
}
int missingNumber(int arr[],int n) {
    int xor1 = 0, xor2 = 0;        
    for (int i = 0; i < n - 1; i++) {
        xor2 = xor2 ^ arr[i];      
        xor1 = xor1 ^ (i + 1);   
    }
    xor1 = xor1 ^ n;        
    return xor1 ^ xor2;
}

int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i = 0;i<n-1;i++){
        cin >> arr[i];
    }
    if(arr[0] != 1){
        cout << 1 << endl;
    }
    else{
        int ele;
        for(int i = 0;i<n-2;i++){
            if((arr[i]+1)!=arr[i+1]){
                ele = arr[i]+1;
                break;
            }
        }
        cout << ele << endl;
    }
    cout << "Summation method:"<<summation(arr,n)<< endl;
    cout << "XOR method:"<<missingNumber(arr,n)<< endl;
}
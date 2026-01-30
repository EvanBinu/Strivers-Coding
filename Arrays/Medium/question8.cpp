#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i]==n){
            arr[i] = 1;
        }
        else{
            arr[i]++;
        }
    }
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

}
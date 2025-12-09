#include <iostream>
using namespace std;

int duplicates(int arr[], int n){
    int i = 0;
    for(int j = 1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int val = duplicates(arr,n);
    for(int i = 0;i<val;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > max1){
            max1 = arr[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }
    cout << max2 << endl;
    

}
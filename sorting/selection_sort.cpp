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
        int mini = i;
        for(int j = i;j<n;j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
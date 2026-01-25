#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void left_shift_k(vector<int> &arr,int k){
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());    
}
void right_shift_k(vector<int> &arr, int k){
    reverse(arr.begin(),arr.end()); 
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());    
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    left_shift_k(arr,k);
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
    right_shift_k(arr,k);
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

}
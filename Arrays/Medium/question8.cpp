#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    int brk = -1;
    for(int i = n-2;i>-1;i--){
        if(arr[i] < arr[i+1]){
            brk = i;
            break;
        }
    }
    if(brk <0){
        reverse(arr.begin(),arr.end());
    }
    else{
        int brk1=-1;
        for(int i = n-1;i>0;i--){
            if(arr[i] > arr[brk]){
                brk1 = i;
                break;
            }
        }
        swap(arr[brk],arr[brk1]);
        reverse(arr.begin()+brk+1,arr.end());
    }
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

}
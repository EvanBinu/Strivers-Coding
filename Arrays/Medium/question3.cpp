#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int count =1;
    int ele = arr[0];
    for(int i = 1;i<n;i++){
        if(ele == arr[i]){
            count++;
        }
        else if(ele!= arr[i] && (count)==0){
            ele = arr[i];
            count++;
        }
        else{
            count--;
        }
    }
    
    cout << ele << endl;
}
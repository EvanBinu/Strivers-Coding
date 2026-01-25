#include <iostream>
using namespace std;

int main(){
    int n,target;
    cin >> n >> target;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int flag = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == target){
            flag++;
        }
    }
    if(flag>0){
        cout << "Target found" << endl;
    }
    else{
        cout << "Target not Found" << endl;
    }
}
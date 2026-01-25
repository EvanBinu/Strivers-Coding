#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int j = -1;
    for(int k = 0;k<n;k++){
        if(arr[k] == 0){
            j = k;   
            break;
        }
    }
    if(j==-1) cout << "No Zeros" << endl;
    else{
        for(int i = j + 1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[j],arr[i]);
                j++;
            }
        }
    }
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int curr = 0;
    int best = INT_MIN;
    for(int i = 0;i<n;i++){
        curr+=arr[i];
        best=max(curr,best);
        if(curr < 0){
            curr = 0;
        }
        
    }
    cout << best << endl;

}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int curr=0;
    int best = INT_MIN;
    int start = 0;
    int astart = -1;
    int end = -1;
    for(int i = 0;i<n;i++){
        curr+=arr[i];
        if(curr > best){
            end = i;
            astart = start;
            best = curr;
        }
        if(curr < 0){
            curr = 0;
            start = i+1;
        }        
    }
    for(int i = astart;i<end+1;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
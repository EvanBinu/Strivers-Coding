#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int buy = arr[0];
    int sell = arr[0];
    int profit = sell - buy;
    for(int i=1;i<n;i++){
        if(arr[i]<buy){
            buy = arr[i];
            sell = arr[i];
        }
        else if(arr[i]>sell ){
            sell = arr[i];
        }
        profit = max(profit,sell-buy);
    }
    cout << profit << endl;
}
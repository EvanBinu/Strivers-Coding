#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 1;i<=n/2;i++){
        if(n%i == 0){
            arr.push_back(i);
        }
    }
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;
    return 0;

}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> result(n);
        int pindex = 0;
        int nindex = 1;
        for(int x : arr ){
            if(x>=0){
                result[pindex] = x;
                pindex+=2;
            }
            else{
                result[nindex] = x;
                nindex+=2;
            }
        }
    for(int x :result){
        cout << x << " ";
    }
    cout << endl;

}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int l = 0;
    while(n>0){
        l++;
        n/=10;
    }
    cout << l << endl;
    return 0;
}
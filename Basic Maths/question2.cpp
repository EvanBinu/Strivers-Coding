#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    while(n>0){
        int d = n%10;
        a = a*10+d;
        n/=10;
    }
    cout << a << endl;
    return 0;
}
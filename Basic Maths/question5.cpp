#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dummy = n;
    int a = 0;
    while(n>0){
        int d = n%10;
        a = a + d*d*d;
        n/=10;
    }
    if(a == dummy){
        cout << "Armstrong" << endl;
    }
    else{
        cout << "Not Armstrong" << endl;
    }
    return 0;
}
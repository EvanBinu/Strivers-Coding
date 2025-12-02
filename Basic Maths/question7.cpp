#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int f = 0;
    for(int i = 2;i<=n/2;i++){
        if(n%i==0){
            f++;
            break;
        }
    }
    cout << (f > 0 ? "Not Prime" : "Prime") << endl;
}
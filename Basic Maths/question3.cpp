#include <iostream>
using namespace std;

int main(){
    int n;    
    cin >> n;
    int dummy = n;
    int a = 0;
    while(n>0){
        int d = n%10;
        a = a*10+d;
        n/=10;
    }

    if(a == dummy){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
}
#include <iostream>
using namespace std;

bool palindrome(int i,string str){
    if (i>=str.length()/2) return true;
    if (str[i] != str[str.length()-i-1]) return false;
    return palindrome(i+1,str);
}

int main(){
    string str;
    cin >> str;
    cout << palindrome(0,str);
}
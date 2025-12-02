#include <iostream>
#include <string>
using namespace std;

void print(string name,int n){
    if(n==0) return;

    print(name,n-1);
    cout << name << " ";
}

int main(){
    string name;    
    int n;
    cin >> name >> n;
    print(name,n);

}
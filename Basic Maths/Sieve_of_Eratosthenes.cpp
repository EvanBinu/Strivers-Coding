#include <iostream>
#include <vector>
using namespace std;
// Best algorithm to find out prime number
// Very less time complexity 
int main(){
    int n;
    cin >> n;
    vector<bool> isprime(n+1,true);
    isprime[0] = isprime[1] = false;
    for(int i = 2;i*i<=n;i++){
        if(isprime[i]){
            for(int j = i*i;j<=n;j+=i){
                isprime[j] = false;
            }
        }
    }
    vector<int> result;
    for(int i = 2;i<n;i++){
        if(isprime[i]) result.push_back(i);
    }
    for(int x : result){
        cout << x << " " ;
    }
    cout << endl;
}

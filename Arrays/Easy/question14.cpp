#include <iostream>
#include <map>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int sum = 0;
    int maxlen = 0;
    map<int,int> prefixmap;

    for(int i = 0;i<n;i++){
        sum += arr[i];
        if(sum == k){
            maxlen = max(maxlen,i+1);
        }
        int rem = sum - k;
        if(prefixmap.find(rem)!=prefixmap.end()){
            int len = i - prefixmap[rem];
            maxlen = max(maxlen,len);
        }
        if(prefixmap.find(sum) == prefixmap.end()){
            prefixmap[sum] = i;
        }
    }
    cout << maxlen << endl;


}
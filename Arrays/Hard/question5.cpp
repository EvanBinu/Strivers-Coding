#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    unordered_map<int,int> map;
    int maxi = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
        if(sum == 0){
            maxi = i+1;
        }
        else{
            if(map.find(sum) != map.end()){
                maxi = max(maxi,i-map[sum]);
            }
            else{
                map[sum] = i;
            }
        }
    }
    cout << maxi << endl;
}
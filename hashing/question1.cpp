#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    map<int,int> mp;
    set<int> s(arr,arr+n);
    for(int x : s){
        for(int u : arr){
            if(x == u){
                mp[x]++;
            }
        }
    }
    vector<vector<int>> result(s.size(), vector<int>(2));
    for (auto &p : mp) {
        result.push_back({ p.first,p.second});
    }
    



}
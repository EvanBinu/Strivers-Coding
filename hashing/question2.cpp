#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> mp;

    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    vector<pair<int, int>> vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(), [](auto &a, auto &b){
        return a.second < b.second;
    });

    cout << vec[0].first << " " << vec[0].second << endl;
    cout << vec.back().first << " " << vec.back().second << endl;

    return 0;
}

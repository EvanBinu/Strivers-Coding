#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int  n,k;
    cin >> n >>k;
    vector<int> nums(n);
    for(int i = 0;i<n;i++){
        cin >> nums[i];
    }
    unordered_map<int, int> prefixSumCount;
    int prefixsum =0 ;
    int count = 0;
    prefixSumCount[0] = 1;
    for(int i = 0;i<n;i++){
        prefixsum+=nums[i];
        int remove = prefixsum - k;
        if (prefixSumCount.find(remove) != prefixSumCount.end()) {
                count += prefixSumCount[remove];
        }
        prefixSumCount[prefixsum]++;

    }
    cout << count << endl;
    
}
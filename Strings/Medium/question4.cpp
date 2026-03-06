#include<iostream>
#include<string>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int atmost(string s,int k){
    if(k<0) return 0;
    int left = 0;
    vector<int> freq(26,0);
    int count = 0;
    int n = s.size();
    int distinct = 0;
    for(int right = 0;right < n;right++){
        if(freq[s[right] - 'a'] == 0){
            distinct++;
        }
        freq[s[right] - 'a']++;
        while(distinct > k){
            freq[s[left]-'a']--;
            if(freq[s[left]-'a'] == 0){
                distinct--;
            }
            left++;
        }
        count+=(right-left+1);
    }
    return count;
}

int main(){
    string s;
    int k;
    cin >> s >> k;
    int ans = atmost(s,k) - atmost(s,k-1);
    cout << ans << endl;
}
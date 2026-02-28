#include<iostream>
#include<string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> smap;
        unordered_map<int,int> tmap;
        int n = s.size();
        if(s.size()!=t.size()) return false;
        for(int i =0;i<n;i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        for(int i = 0;i<n;i++){
            if(smap[s[i]] != tmap[s[i]]) return false;
        }
        return true;

    }
};
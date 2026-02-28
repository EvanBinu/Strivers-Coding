#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if(s==goal) return true;
        while(n>0){
            int ele = s[0];
            s.erase(0,1);
            s.push_back(ele);
            if(s == goal) return true;
            n--;
        }
        return false;
    }
};
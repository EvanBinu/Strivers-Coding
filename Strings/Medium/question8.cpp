#include<iostream>
#include<string>
#include <unordered_map>
#include <algorithm>
#include <set>
class Solution {
public:
    string reverseWords(string s) {
        string result = "";

        int n = s.size();
        int p1 = n - 1;


        while(p1 >= 0){
            while(p1>=0 && s[p1] == ' ') p1--;
            if(p1 <0) break;
            int p2 = p1;
            while(p2>=0 && s[p2] != ' ')p2--;
            if(!result.empty()) result += " ";
            result+= s.substr(p2+1,p1-p2);
            p1 = p2;
        }
        return result;
        
    }
};
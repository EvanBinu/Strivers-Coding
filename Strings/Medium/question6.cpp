#include<iostream>
#include<string>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxlen= 0;
        int start = 0;
        for(int i = 0;i<n;){
            int right = i,left =i;
            while(right<n-1 && s[right+1] == s[right]) right++;
            i = right + 1;
            while(left >0 && s[left -1] == s[right+1]){
                left--;
                right++;
            }
            if(right - left + 1> maxlen){
                start = left;
                maxlen = right- left+1;
            }

        }
        return s.substr(start,maxlen);
    }
};
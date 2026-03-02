#include<iostream>
#include<string>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxpar = 0;
        for(char ch : s){
            if(ch == '(') {
                count++;
                maxpar = max(count,maxpar);
            }
            else if(ch == ')'){
                count--;
            }
        }
        return maxpar;
    }
};
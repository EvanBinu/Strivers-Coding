#include<iostream>
#include<string>
using namespace std;

string removeOuterParentheses(string s) {
        int level = 0;
        string r ="";
        for(char x : s){
            if(x == '(' ){
                level++;
                if(level > 1){
                    r+='(';
                }            
                
            }
            else if(x==')' ){
                level--;
                if(level>0){
                    r+=')';
                }               
                
            }
             
        }
        return r;
    }
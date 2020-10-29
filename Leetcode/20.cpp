//https://leetcode.com/problems/valid-parentheses/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                a.push(s[i]);
            } 
            else if(s[i] == ')')
            {
                if(i == 0 ||  a.empty() || a.top() != '(') 
                   return false;
                a.pop();
            } 
            else if(s[i] == ']') {
                if(i == 0 || a.empty() || a.top() != '[') {
                    return false;
                }
                a.pop();
            } else if(s[i] == '}') {
                if(i == 0 || a.empty() || a.top() != '{') {
                    return false;
                }
                a.pop();
            }
        }
        return a.empty();
    }
};
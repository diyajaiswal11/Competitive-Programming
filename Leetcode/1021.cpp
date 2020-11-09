//https://leetcode.com/problems/remove-outermost-parentheses/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int n=s.length();
        string ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            if(st.size()>1)
            {
                ans+=s[i];
            }
            if(s[i]==')')
            {
                st.pop();
            }
        }
        return ans;
    }           
};
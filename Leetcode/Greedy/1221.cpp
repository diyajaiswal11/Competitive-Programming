// 1221. Split a String in Balanced Strings

// Balanced strings are those who have equal quantity of 'L' and 'R' characters.

// Given a balanced string s split it in the maximum amount of balanced strings.

// Return the maximum amount of splitted balanced strings.

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int c=0,ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
                c-=1;
            else
                c+=1;
            if(c==0)
                ans+=1;
        }
        return ans;
    }
};
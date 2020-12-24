//https://leetcode.com/problems/to-lower-case/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(int(s[i])>=65&&int(s[i])<=90)
                s[i]=int(s[i])+32;
        }
        return s;
    }
};
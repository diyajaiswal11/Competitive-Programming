//https://leetcode.com/problems/shuffle-string/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string s1;
        for(int i=0;i<s.length();i++)
        {
            s1+="A";
        }
        for(int i=0;i<s.length();i++)
        {
            s1[indices[i]]=s[i];
        }
        return s1;
    }
};
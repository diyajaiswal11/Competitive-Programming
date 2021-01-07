//https://leetcode.com/problems/valid-anagram/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<int,int>m1;
        map<int,int>m2;
        for(int i=0;i<s.length();i++)
        {
            m1[s[i]]+=1;
        }
        for(int i=0;i<t.length();i++)
        {
            m2[t[i]]+=1;
        }
        for(int i=97;i<123;i++)
        {
            if(m1[i]!=m2[i])
                return false;
        }
        return true;
    }
};
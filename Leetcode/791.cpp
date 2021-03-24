#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    string customSortString(string s, string t) {
        
        int n=t.size();
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            m[t[i]]+=1;
        }
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]>=1)
            {
                for(int j=0;j<m[s[i]];j++)
                    ans+=s[i];
                m[s[i]]=0;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(m[char(i+97)]>=1)
            {
                for(int j=0;j<m[char(i+97)];j++)
                    ans+=char(i+97);
            }
        }
        return ans;
        
    }
};
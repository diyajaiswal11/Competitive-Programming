//https://leetcode.com/problems/roman-to-integer/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int n=s.length(),ans=0;
        if(n==1)
            return m[s[0]];
        else if(n==2)
        {
            if(m[s[0]]<m[s[1]])
                return m[s[1]]-m[s[0]];
            else
                return m[s[1]]+m[s[0]];
        }
        for(int i=0;i<n-1;)
        {
            if(m[s[i]]>=m[s[i+1]])
            {
                ans+=m[s[i]];
                i+=1;
            }
            else
            {
                ans+=(m[s[i+1]]-m[s[i]]);
                i+=2;
            } 
        }
        if(m[s[n-1]]<=m[s[n-2]])
            ans+=m[s[n-1]];
        return ans;
        
    }
};
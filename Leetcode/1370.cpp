#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    string sortString(string s) {
        
        string res="";
        vector<int>a(26,0);
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            a[s[i]-97]+=1;
        }
        int mx=0;
        for(int i=0;i<26;i++)
        {
            if(mx<a[i])
                mx=a[i];
        }
        for(int i=0;i<mx;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(a[j]>0)
                {
                    res+=char(j+97);
                    a[j]-=1;
                }
            }
            for(int j=25;j>=0;j--)
            {
                if(a[j]>0)
                {
                    res+=char(j+97);
                    a[j]-=1;
                }
            }
        }   
        return res;  
        }
};
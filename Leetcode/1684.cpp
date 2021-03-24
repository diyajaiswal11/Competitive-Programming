#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        
        int n=w.size(),ans=0;
        map<char,int>ma;
        for(int i =0;i<a.size();i++)
        {
            ma[a[i]]+=1;
        }
        for(int i=0;i<n;i++)
        {
            map<char,int>m;
            for(int j=0;j<w[i].size();j++)
            {
                m[w[i][j]]+=1;
            }
            bool f=true;
            for(int k=0;k<26;k++)
            {
                if(ma[k+97]<1&&m[k+97]>=1)
                    f=false;
            }
            if(f)
                ans+=1;
        }
        return ans;
    }
};
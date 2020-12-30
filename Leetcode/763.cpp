//https://leetcode.com/problems/partition-labels/



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        map<int,int>m;
        int i,n=s.length();
        for(i=97;i<=122;i++)
            m[i]=-1;
        for(i=n-1;i>=0;i--)
        {
            if(m[int(s[i])]==-1)
                m[int(s[i])]=i;
        }
        for(i=97;i<=122;i++)
            cout<<m[i]<<" ";
        vector<int>ans;
        for(i=0;i<n;)
        {
            int j=m[int(s[i])];
            for(int k=i;k<=j;k++)
            {
                if(m[int(s[k])]>j)
                    j=m[s[k]];
            }
            ans.push_back(j-i+1);
            i=j+1;
        }
        return ans;
        
    }
};
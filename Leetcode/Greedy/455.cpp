//https://leetcode.com/problems/assign-cookies/



#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ig=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(ig<g.size())
            {
                if(s[i]-g[ig]<0)
                    continue;
                else
                {
                    ig+=1;
                    ans+=1;
                }
            }
           
        }
        return ans;
    }
};
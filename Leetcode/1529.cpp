//https://leetcode.com/problems/bulb-switcher-iv/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int minFlips(string t) {
        
        int n=t.size();
        int start=0,end=n-1,ans=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]=='1')
                break;
            start+=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(t[i]=='1')
                break;
            end-=1;
        }
        if(start==n&&end==-1)
            return 0;
        if(start==end)
            return 1;
        
        for(int i=start;i<end;i++)
        {
            if(t[i]!=t[i+1])
                ans+=1;
        }
        if(end!=n-1)
            ans+=1;
        return ans+1;
    }
};
//https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& t) {
        
        map<int,int>m;
        int n=t.size(),ans=0;
        for(int i=0;i<n;i++)
        {
            m[t[i]%60]+=1;
        }
        for(int i=1;i<=30;i++)
        {
            if(i==30)
                ans+=(m[i]*(m[i]-1))/2;
            else
                ans+=(m[i]*m[60-i]);
        }
        if(m[0]>0)
        {
            ans+=(m[0]*(m[0]-1))/2;
        }
        return ans;
    }
};
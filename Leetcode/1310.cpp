//https://leetcode.com/problems/xor-queries-of-a-subarray/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        
        int n=a.size();
        vector<int> ans(n);
        ans[0]=a[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=ans[i-1]^a[i];
        }
        
        vector<int>p;
        for(int i=0;i<q.size();i++)
        {
            if(q[i][0]==0)
                p.push_back(ans[q[i][1]]);
            else
                p.push_back(ans[q[i][1]]^ans[q[i][0]-1]);
        }
        
        return p;
        
        
        
    }
};
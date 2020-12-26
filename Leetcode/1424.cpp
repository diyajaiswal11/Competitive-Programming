//https://leetcode.com/problems/diagonal-traverse-ii/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& a) {
        
        if (!a.size() || !a[0].size()) return {};
        int n=a.size();
        vector<int>ans;
        map<int,vector<int>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<a[i].size();j++)
            {
                m[i+j].push_back(a[i][j]);
            }
        }
        for(auto i:m)
        {
            reverse(i.second.begin(),i.second.end());
            for(int j=0;j<i.second.size();j++)
                ans.push_back(i.second[j]);
        }
        
        
        
        return ans;
      
    }
};
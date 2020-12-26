//https://leetcode.com/problems/diagonal-traverse/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& a) {
        
        if (!a.size() || !a[0].size()) return {};
        int n=a.size(),m=a[0].size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>b;
            int i1=i,j1=0;
            while(i1>=0&&i1<n&&j1>=0&&j1<m)
            {
                b.push_back(a[i1][j1]);
                i1-=1;
                j1+=1;
            }
            if(i%2!=0)
                reverse(b.begin(),b.end());
            
            for(int j=0;j<b.size();j++)
                ans.push_back(b[j]);
        }
        for(int j=1;j<m;j++)
        {
            vector<int>b;
            int i1=n-1,j1=j;
            while(i1>=0&&i1<n&&j1>=0&&j1<m)
            {
                b.push_back(a[i1][j1]);
                i1-=1;
                j1+=1;
            }
            if((n%2==0&&j%2==0) || (n%2!=0&&j%2!=0))
                reverse(b.begin(),b.end());
            
            for(int z=0;z<b.size();z++)
                ans.push_back(b[z]);
          
        }
        return ans;
    }
};
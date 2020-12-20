//https://leetcode.com/problems/flipping-an-image/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        
        int n=a.size(),m=a[0].size();
        for(int i=0;i<n;i++)
        {
            reverse(a[i].begin(),a[i].end());
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                    a[i][j]-=1;
                else
                    a[i][j]+=1;
            }
        return a;
    }
};
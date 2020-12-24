//https://leetcode.com/problems/search-a-2d-matrix/

#include <bits/stdc++.h> 
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int x) {
        
        int n=a.size(),m=a[0].size(),i=0;
        if(x<a[0][0])
            return false;
        for(i=0;i<n;i++)
        {
            if(x>=a[i][0]&&x<=a[i][m-1])
                break;
        }
        if(i<n)
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
                return true;
        }
        
        return false;
    }
};
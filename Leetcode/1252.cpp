//https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& ind) {
        
        map<int,int>row;
        map<int,int>col;
        for(int i=0;i<ind.size();i++)
        {
            row[ind[i][0]]+=1;
            col[ind[i][1]]+=1;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((row[i]+col[j])%2!=0)
                    ans+=1;
            }
        }
        return ans;
    }
};
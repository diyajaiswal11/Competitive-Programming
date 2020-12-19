//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int>>& a) {
        
        int n=a.size(),m=a[0].size(),c=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j]<0)
                    c+=1;
        
        return c;
    }
};
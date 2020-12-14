//https://leetcode.com/problems/richest-customer-wealth/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        
        int sum=0,max=0;
        for(int i=0;i<a.size();i++)
        {
            sum=0;
            for(int j=0;j<a[i].size();j++)
            {
                sum+=a[i][j];
            }
            if(sum>max)
                max=sum;
        }
        return max;
    }
};
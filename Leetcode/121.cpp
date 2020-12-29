// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        if(n==0) 
            return 0;
        int minp=p[0],maxp=0;
        for(int i=0;i<n;i++)
        {
            minp=min(minp,p[i]);
            maxp=max(maxp,p[i]-minp);
        }
        return maxp;
        
    }
};
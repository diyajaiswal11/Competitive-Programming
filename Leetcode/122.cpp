// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int n=a.size(),buy=-1,sell=-1,ans=0,i=0;
        bool flag=false;
        for(i=1;i<n;i++)
        {
            if(a[i-1]<a[i])
                ans+=(a[i]-a[i-1]);
        }
        
        return ans;
    }
    
};
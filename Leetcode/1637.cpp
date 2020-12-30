//https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        
        vector<int>a;
        for(int i=0;i<p.size();i++)
        {
            a.push_back(p[i][0]);
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i+1]-a[i]>ans)
                ans=a[i+1]-a[i];
        }
        return ans;
        
    }
};
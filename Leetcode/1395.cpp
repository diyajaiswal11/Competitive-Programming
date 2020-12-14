// https://leetcode.com/problems/count-number-of-teams/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int numTeams(vector<int>& a) {
        
        int n=a.size(),ans=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(a[i]<a[j]&&a[j]<a[k])
                        ans+=1;
                    if(a[i]>a[j]&&a[j]>a[k])
                        ans+=1;
                }
            }
        }
        return ans;
    }
};
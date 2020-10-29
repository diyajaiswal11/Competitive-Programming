//https://leetcode.com/problems/maximize-distance-to-closest-person/



#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxDistToClosest(vector<int>& a) {
        int n=a.size(),mn=0,ans=0,i=0,j=n-1,l=0,r=0;
        
        while(a[i]==0)
        {
            l+=1;
            i+=1;
        }
        while(a[j]==0)
        {
            r+=1;
            j-=1;
        }
        int x=max(l,r);
        for(int k=i;k<=j;k++)
        {
            if(a[k]==1)
            {
                if(ans<mn)
                    ans=mn;
                mn=0;
            }
            else
            {
                mn+=1;
            }
        }
        if(ans%2==0)
            return max(ans/2,x);
        else
            return max(ans/2+1,x);
    }
};
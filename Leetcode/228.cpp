//https://leetcode.com/problems/summary-ranges/



#include <bits/stdc++.h> 
using namespace std;

#include <vector>
#include <string>
class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        int n=a.size();
        vector<string>ans;
        if(n == 0) 
            return ans;
        int l=a[0],r=a[0],i=1;
        if(n==1)
        {
            ans.push_back(to_string(a[0]));
            return ans;
        }
        for(i=1;i<n;i++)
        {
            if(a[i]-1==a[i-1])
            {
                r=a[i];
            }
            else
            {
                if(l==r)
                    ans.push_back(to_string(l));
                else
                   ans.push_back(to_string(l)+"->"+to_string(r));
                l=a[i];
                r=a[i];
            }
        }
        if(n)
        {
            if(a[i-1]-1!=a[i-2])
            ans.push_back(to_string(l));
            else
            ans.push_back(to_string(l)+"->"+to_string(r));
        }
        
        return ans;
        
    }
};
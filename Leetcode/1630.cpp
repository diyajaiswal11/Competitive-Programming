//https://leetcode.com/problems/arithmetic-subarrays/


#include <bits/stdc++.h>
using namespace std;

#include<iostream> 
#include<vector>
#include<algorithm>
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        int n=l.size();
        vector<bool>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>a;
            a.assign(nums.begin()+l[i], nums.begin()+r[i]+1); 
           
            sort(a.begin(),a.end());
            if(a.size()<2)
                ans.push_back(false);
            else
            {
                int diff=a[1]-a[0],flag=0;
                for(int j=1;j<a.size()-1;j++)
                {
                    if(a[j+1]-a[j]!=diff)
                    {
                        ans.push_back(false);
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    ans.push_back(true);
            }
        }
        return ans;
        
    }
};
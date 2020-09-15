//https://leetcode.com/problems/maximum-subarray/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0,ans=0,neg=0,mx=a[0];
        if(a.size()==1)
            return a[0];
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<=0)
            neg+=1;
            if(a[i]>=mx)
                mx=a[i];
        }
        if(neg==a.size())
            return mx;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            if(sum<0)
                sum=0;
            else if(ans<sum)
                ans=sum;
        }
        return ans;
    }
};
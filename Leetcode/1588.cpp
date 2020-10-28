//https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

#include <bits/stdc++.h> 
using namespace std;


class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& a) {
        int n=a.size(),ans=0;
        for(int i=0;i<n;i++)
        {
            int res=(i+1)*(n-i);
            if(res%2==0)
                res/=2;
            else
                res=res/2+1;
            ans+=a[i]*res;
        }
        return ans;
    }
};
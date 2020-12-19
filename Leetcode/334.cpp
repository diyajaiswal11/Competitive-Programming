//https://leetcode.com/problems/increasing-triplet-subsequence/



#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        int n=a.size();
        if(n<3)
            return false;
        int x=INT_MAX,y=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=x)
                x=a[i];
            else if(a[i]<=y)
                y=a[i];
            else
                return true;
        }
        return false;
    }
};
//https://leetcode.com/problems/the-kth-factor-of-n/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                v.push_back(i);
        }
        if(k<=v.size())
            return v[k-1];
        else
            return -1;
    }
};
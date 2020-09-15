//https://leetcode.com/problems/climbing-stairs/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        vector<int> a;
        for(int i=0;i<=3;i++)
        {
            a.push_back(i);
        }
        for(int i=4;i<=n;i++)
        {
            a.push_back(a[i-1]+a[i-2]);
        }
        return a[n];
    }
    
};
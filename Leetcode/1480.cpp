//https://leetcode.com/problems/running-sum-of-1d-array/



#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        vector<int>b;
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            b.push_back(sum);
        }
        return b;
    }
};
//https://leetcode.com/problems/create-target-array-in-the-given-order/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> createTargetArray(vector<int>& a, vector<int>& x) {
        
        int n=a.size();
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            b.insert(b.begin()+x[i],a[i]);
        }
        return b;
    }
};
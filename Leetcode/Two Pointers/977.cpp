//https://leetcode.com/problems/squares-of-a-sorted-array/



#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int> b;
        for(int i=0;i<a.size();i++)
        {
            b.push_back(a[i]*a[i]);
        }
        sort(b.begin(),b.end());
        return b;
    }
};

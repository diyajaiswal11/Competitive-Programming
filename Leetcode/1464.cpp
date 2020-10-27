//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/



#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& a) {
        sort(a.begin(),a.end());
        int l=a.size();
        return (a[l-1]-1)*(a[l-2]-1);
    }
};
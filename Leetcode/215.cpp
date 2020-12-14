//https://leetcode.com/problems/kth-largest-element-in-an-array/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        return a[k-1];
    }
};
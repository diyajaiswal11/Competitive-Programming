//https://leetcode.com/problems/merge-sorted-array/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        
        int p=a[m];
        for(int i=0;i<n;i++)
        {
            a[m]=b[i];
            m+=1;
        }
        sort(a.begin(),a.end());
    }
    
};
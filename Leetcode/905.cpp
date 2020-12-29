//https://leetcode.com/problems/sort-array-by-parity/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        
        int n=a.size();
        vector<int>b;
        for(int i=0;i<n;i++)
            if(a[i]%2==0)
                b.push_back(a[i]);
        for(int i=0;i<n;i++)
            if(a[i]%2!=0)
                b.push_back(a[i]);
        return b;
    }
};
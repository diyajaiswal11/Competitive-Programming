//https://leetcode.com/problems/monotonic-array/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        
        bool inc=true,dec=true;
        int n=a.size();
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                inc=false;
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
                dec=false;
        }
        
        return inc||dec;
        
        
        
    }
};
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int findMin(vector<int>& a) {
        
        int n=a.size(),ele=-5001;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                ele=a[i+1];
        }
        if(ele==-5001)
            ele=a[0];
        return ele;
    }
};
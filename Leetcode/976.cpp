//https://leetcode.com/problems/largest-perimeter-triangle/



#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size(),i=0;
        for(i=n-1;i>=2;i--)
        {
            if(a[i]<a[i-1]+a[i-2])
                return a[i]+a[i-1]+a[i-2];
        }
        return 0;
    }
};
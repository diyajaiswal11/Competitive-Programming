//https://leetcode.com/problems/binary-search/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int search(vector<int>& a, int x) {
        
        int l=0,r=a.size()-1,mid=0;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(a[mid]==x)
                return mid;
            else if(x<a[mid])
                r=mid-1;
            else
                l=mid+1;
        }
          
        return -1;
            
    }
};
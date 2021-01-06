//https://leetcode.com/problems/kth-missing-positive-number/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        
        int x=0,n=a.size(),i=0,c=0;
        while(c<k&&i<n)
        {
            x+=1;
            if(x==a[i])
                i+=1;
            else
                c+=1;
        }
        while(c<k)
        {
            c+=1;
            x+=1;
        }
        return x;
        
    }
};
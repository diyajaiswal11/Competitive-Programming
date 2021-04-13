//https://leetcode.com/problems/minimum-operations-to-make-array-equal/ 


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int minOperations(int n) {
        
        int ans=0;
        if(n%2==0)
        {
            for(int i=1;i<n;i+=2)
                ans+=i;
        }
        else
        {
            for(int i=2;i<n;i+=2)
                ans+=i;
        }
        return ans;
    }
};
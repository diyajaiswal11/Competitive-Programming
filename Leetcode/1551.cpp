//https://leetcode.com/problems/minimum-operations-to-make-array-equal/ 


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int minOperations(int n) {
        if(n==1)
            return 0;
        int c=2;
        if(n%2==0)
            return (n/2)*(n/2);
        else
        {
            n=(n+1)/2;
            return n*n-n;
        }
            
        
    }
};
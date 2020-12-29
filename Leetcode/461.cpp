//https://leetcode.com/problems/hamming-distance/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int a=x^y,ans=0;
        for (int i = 31; i >= 0; i--) { 
        int k = a >> i; 
        if (k & 1) 
           ans+=1;
        } 
        return ans;
    }
};
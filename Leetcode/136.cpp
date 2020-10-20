//https://leetcode.com/problems/single-number/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& a) {
        int x=0;
        for(int i=0;i<a.size();i++)
        {
            x^=a[i];
        }
        return x;
    }
};
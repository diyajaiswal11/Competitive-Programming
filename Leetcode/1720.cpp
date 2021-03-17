//https://leetcode.com/problems/decode-xored-array/

#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>
class Solution {
public:
    vector<int> decode(vector<int>& a, int f) {
        
        vector<int>b;
        b.push_back(f);
        for(int i=0;i<a.size();i++)
        {
            b.push_back(b[i]^a[i]);
        }
        return b;
        
    }
};
//https://leetcode.com/problems/sort-an-array/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& a) {
        
        sort(a.begin(),a.end());
        return a;
    }
};
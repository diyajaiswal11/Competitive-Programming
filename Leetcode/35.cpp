//https://leetcode.com/problems/search-insert-position/



#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it;
        it=std::lower_bound(nums.begin(),nums.end(),target);
        return it-nums.begin();
        
    }
};
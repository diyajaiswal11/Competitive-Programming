//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/



#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector<int> ans; 
        while(i<j)
        {
            if(numbers[i]+numbers[j]<target)
            {
                i+=1;
            }
            else if(numbers[i]+numbers[j]>target)
            {
                j-=1;
            }
            else
            {
                break;
            } 
        }
        return {i+1,j+1};
    }
};
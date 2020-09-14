//https://leetcode.com/problems/missing-number/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& a) {
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
        }
        int sum1=(a.size()*(a.size()+1))/2;
        return sum1-sum;
    }
};
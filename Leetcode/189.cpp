// https://leetcode.com/problems/rotate-array/



#include <bits/stdc++.h> 
using namespace std;

#include <vector>
class Solution {
public:
    void rotate(vector<int>& a, int k) {
        
        int n=a.size();
        int j=n-1;
        for(int i=0;i<k;i++)
        {
            j=a.size()-1;
            a.insert(a.begin(),a[j]);
            a.pop_back();
        }
    }
};
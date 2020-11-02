//https://leetcode.com/problems/contains-duplicate/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        int n=a.size();
        set<int> s; 
        for(int x:a) 
        {
            s.insert(x);
        } 
        if(s.size()==n)
            return false;
        else
            return true;
    }
};
//https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        
        int n=s.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(q>=s[i]&&q<=e[i])
                c+=1;
        }
        return c;
    }
};
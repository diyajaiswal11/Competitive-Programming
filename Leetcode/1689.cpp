//https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/



#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int minPartitions(string s) {
        
        int n=s.length(),ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]-'0'>ans)
                ans=s[i]-'0';
        }
        return ans;
    }
};
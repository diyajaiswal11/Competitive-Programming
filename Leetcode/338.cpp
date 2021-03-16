//https://leetcode.com/problems/counting-bits/


#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans;
        
        for(int i=0;i<=n;i++)
        {
            int a=0;
            int m=i;
            while(m>0)
            {
                a+=1;
                m=m&(m-1);
            }
            ans.push_back(a);
        }
        
        return ans;
        
    }
};
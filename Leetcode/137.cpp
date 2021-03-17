//https://leetcode.com/problems/single-number-ii/

#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>
class Solution {
public:
    int singleNumber(vector<int>& a) {
        
        long long int ans=0;
        for(int i=0;i<=31;i++)
        {
            long long int p=0;
            for(int j=0;j<a.size();j++)
            {
                if(a[j]&(1<<i))
                    p+=1;
            }
            if(p%3!=0)
                ans+=pow(2,i);
        }
        return ans;
    }
};
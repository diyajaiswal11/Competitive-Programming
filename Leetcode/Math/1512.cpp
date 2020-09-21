//https://leetcode.com/problems/number-of-good-pairs/



#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        int ans=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=i+1;j<a.size();j++)
            {
                if(a[i]==a[j])
                    ans+=1;
            }
        }
        return ans;
    }
};
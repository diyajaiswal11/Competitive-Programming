//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/



#include <bits/stdc++.h> 
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        int mx=0;
        vector<bool>ans;
        for(int i=0;i<c.size();i++)
        {
            if(c[i]>=mx)
                mx=c[i];
        }
        for(int i=0;i<c.size();i++)
        {
            if(ec+c[i]>=mx)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
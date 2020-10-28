//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/


#include <bits/stdc++.h> 
using namespace std;


class Solution {
public:
    int findNumbers(vector<int>& a) {
        int n=a.size(),ans=0;
        for(int i=0;i<n;i++)
        {
            int x=a[i],c=0;
            while(a[i])
            {
                a[i]/=10;
                c+=1;
            }
            if(c%2==0)
                ans+=1;
        }
        return ans;
    }
};
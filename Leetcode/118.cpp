//https://leetcode.com/problems/pascals-triangle/


#include <bits/stdc++.h> 
using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> a;
        if(n==0)
            return a;
        vector<int>c={1};
        a.push_back(c);
        if(n==1)
            return a;
        vector<int>d={1,1};
        a.push_back(d);
        if(n==2)
            return a;
        for(int i=2;i<n;i++)
        {
            vector<int>b;
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                    b.push_back(1);
                else
                    b.push_back(a[i-1][j-1]+a[i-1][j]);
            }
            a.push_back(b);
        }
        return a;
    }
};
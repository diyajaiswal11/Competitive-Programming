//https://leetcode.com/problems/longest-common-subsequence/


#include <bits/stdc++.h> 
using namespace std;

#include<iostream> 
#include<algorithm> 
class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        int m=a.length(),n=b.length();
        vector<vector<int>> t(m+1,vector<int> (n+1, -1));
        for(int i=0;i<m+1;i++)
            for(int j=0;j<n+1;j++)
                if(i==0||j==0)
                    t[i][j]=0;
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++)
            {
                if(a[i-1]==b[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                  t[i][j]=std::max(t[i-1][j],t[i][j-1]);
            }
        return t[m][n];
    }
};
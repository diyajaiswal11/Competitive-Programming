//https://leetcode.com/problems/partition-equal-subset-sum/



#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& a) {
        int s=0;
        for(int i=0;i<a.size();i++)
            s+=a[i];
        if(s%2!=0)
            return false;
        else
        {
            s/=2;
            int n=a.size();
            vector<vector<bool>> t(n+1,vector<bool> (s+1, 0));
            for(int i=0;i<n+1;i++)
                for(int j=0;j<s+1;j++)
                {
                    if(i==0)
                        t[i][j]=false; //when sum is given but have empty array
                    if(j==0)
                        t[i][j]=true; //when array is given but sum is 0
                }
            for(int i=1;i<n+1;i++)
                for(int j=1;j<s+1;j++)
                {
                    if(a[i-1]<=j)  //element less than required sum
                        t[i][j]=t[i-1][j-a[i-1]] || t[i-1][j];  //max of t and f is t||f
                    else  //element greater than required sum
                        t[i][j]=t[i-1][j];
                }
            return t[n][s];
        }
    }
};
//https://leetcode.com/problems/sort-the-matrix-diagonally/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& a) {
        
        int m=a.size(),n=a[0].size();
        for(int i=0;i<m;i++)
        {
            int p=i,q=0,p1=i,q1=0,j=0;
            vector<int>x;
            while(p<m&&q<n)
            {
                x.push_back(a[p][q]);
                p+=1;
                q+=1;
            }
            sort(x.begin(),x.end());
            while(p1<m&&q1<n)
            {
                a[p1][q1]=x[j];
                j+=1;
                p1+=1;
                q1+=1;
                
            }
        }
        for(int j=1;j<n;j++)
        {
            int p=0,q=j,p1=0,q1=j,i=0;
            vector<int>x;
            while(p<m&&q<n)
            {
                x.push_back(a[p][q]);
                p+=1;
                q+=1;
            }
            sort(x.begin(),x.end());
            while(p1<m&&q1<n)
            {
                a[p1][q1]=x[i];
                i+=1;
                p1+=1;
                q1+=1;
                
            }
        }
        return a;
    }
};
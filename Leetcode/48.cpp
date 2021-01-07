//https://leetcode.com/problems/rotate-image/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            int x=0,y=n-1,m=n/2,temp=0;
            while(m>0)
            {
                temp=a[x][i];
                a[x][i]=a[y][i];
                a[y][i]=temp;
                m-=1;
                x+=1;
                y-=1;
            }
        }
        int t;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
            }
        }
    }
};
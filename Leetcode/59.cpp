//https://leetcode.com/problems/spiral-matrix-ii/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>a(n,vector<int>(n,0));
        int top=0,bottom=n-1,left=0,right=n-1,dir=0,c=1;
        
        while(c<=n*n)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    a[top][i]=c;
                    c+=1;
                }
                top+=1;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    a[i][right]=c;
                    c+=1;
                }
                right-=1;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    a[bottom][i]=c;
                    c+=1;
                }
                bottom-=1;
            }
            else if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    a[i][left]=c;
                    c+=1;
                }
                left+=1;
            }
            dir=(dir+1)%4;
        }
        
        return a;
    }
};
//https://leetcode.com/problems/spiral-matrix/


#include <bits/stdc++.h> 
using namespace std;
#include<vector>

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        
        vector<int>a;
        int r=m.size(),c=m[0].size(),dir=0;
        int top=0,bottom=r-1,left=0,right=c-1;
        
        while(top<=bottom&&left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                    a.push_back(m[top][i]);
                top+=1;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                    a.push_back(m[i][right]);
                right-=1;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                    a.push_back(m[bottom][i]);
                bottom-=1;
            }
            else if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                    a.push_back(m[i][left]);
                left+=1;
            }
            dir=(dir+1)%4;
        }
        return a;
    }
};
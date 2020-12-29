//https://leetcode.com/problems/robot-return-to-origin/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeCircle(string s) {
        
        int x=0,y=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='D')
                y-=1;
            else if(s[i]=='U')
                y+=1;
            else if(s[i]=='L')
                x-=1;
            else if(s[i]=='R')
                x+=1; 
        }
        if(x==0&&y==0)
            return true;
        else
            return false;
        
    }
};
//https://leetcode.com/problems/consecutive-characters/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int flag=0,ans=0,mx=0;
        for(int i=1;i<s.length();i++)
        {
            if(flag==0)
            {
                mx=1;
                
            }
            if(s[i]==s[i-1])
            {
                flag=1;
                mx+=1;
            }
            else
            {
                flag=0;
                mx=0;
            }
            if(ans<mx)
                ans=mx;
        }
        if(ans==0)
            ans=1;
        return ans;
    }
};
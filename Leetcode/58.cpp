#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.length(),ans=0,j=0;
        reverse(s.begin(),s.end());
        for(;j<n;j++)
        {
            if(s[j]!=32)
                break;
        }
        for(;j<n;j++)
        {
            if((s[j]>=97&&s[j]<=122)||(s[j]>=65&&s[j]<=90))
                ans+=1;
            else
                break;
        }
        return ans;
    }
};
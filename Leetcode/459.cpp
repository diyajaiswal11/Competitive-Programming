#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n=s.length();
        for(int i=1;i<=n/2;i++)
        {
            string p=s.substr(0,i);
            if(n%i==0)
            {
                int mul=n/i;
                string temp="";
                for(int j=1;j<=mul;j++)
                    temp+=p;
                if(temp==s)
                    return true;
            }
            
        }
        return false;
    }
};
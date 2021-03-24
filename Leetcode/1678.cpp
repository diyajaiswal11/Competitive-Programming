#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    string interpret(string s) {
        
        int n=s.length(),i=0;
        string ans="";
        while(i<n)
        {
            if(s[i]=='G')
            {
                ans+="G";
                i+=1;
            }
            else if(s[i]=='('&&s[i+1]==')')
            {
                ans+="o";
                i+=2;
            }
            else if(s[i]=='('&&s[i+1]=='a')
            {
                ans+="al";
                i+=4;
            }
        }
        return ans;
        
    }
};
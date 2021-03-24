#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    bool checkRecord(string s) {
        
        bool ans=true;
        int n=s.size(),ca=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
                ca+=1;
        }
        if(ca>1)
            ans=false;
        string l="LLL";
        for(int i=0;i<n-2;i++)
        {
            if(s.substr(i,3)==l)
                ans=false;
        }
        return ans;
        
    }
};
#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    string shiftingLetters(string s, vector<int>& a) {
        
        int n=a.size();
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]%26;
        }
        for(int i=1;i<n;i++)
        {
            a[i]=(a[i]+a[i-1])%26;
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            int m=int(s[i])+(a[i]%26);
            if(m>122)
                m-=26;
            
            s[i]=char(m);
           
        }
                      
        return s;
                      
        
    }
};
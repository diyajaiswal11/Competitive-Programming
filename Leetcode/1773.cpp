#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    int countMatches(vector<vector<string>>& a, string rk, string rv) {
        
        int n=a.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(rk=="type"&&a[i][0]==rv)
                c+=1;
            if(rk=="color"&&a[i][1]==rv)
                c+=1;
            if(rk=="name"&&a[i][2]==rv)
                c+=1;    
        }
        return c; 
    }
};
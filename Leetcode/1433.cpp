
#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>


class Solution {
public:
    bool checkIfCanBreak(string a, string b) {
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int n=a.size();
        bool inc=true,dec=true;
        for(int i=0;i<n;i++)
        {
            if(int(a[i])>int(b[i]))
                inc=false;
        }
        for(int i=0;i<n;i++)
        {
            if(int(a[i])<int(b[i]))
                dec=false;
        }
        return inc||dec;
    }
};
#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>


class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        
        int n=a.size(),m=b.size();
        if(m<n)
        {
            for(int i=0;i<n-m+1;i++)
                if(a.substr(i,m)==b)
                    return 1;
        }
        int z=0;
        if(m%n==0)
            z=m/n;
        else
            z=m/n+1;
        string p="";
        for(int i=1;i<=z;i++)
            p+=a;
        for(int i=0;i<z*n-m+1;i++)
        {
            if(b==p.substr(i,m))
                return z;
        }
        p+=a;
        z+=1;
        for(int i=0;i<z*n-m+1;i++)
        {
            if(b==p.substr(i,m))
                return z;
        }
        p+=a;
        z+=1;
        for(int i=0;i<z*n-m+1;i++)
        {
            if(b==p.substr(i,m))
                return z;
        }
        return -1;
    }
};
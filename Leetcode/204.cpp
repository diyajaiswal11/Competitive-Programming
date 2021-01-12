//https://leetcode.com/problems/count-primes/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        
        if(n==0||n==1)
            return 0;
        vector<int>p(n+1);
        for(int i=0;i<=n;i++)
            p[i]=1;
        p[0]=0;
        p[1]=0;
        for(int i=2;i*i<=n;i++)
        {
            if(p[i]==1)
            {
                for(int j=2;i*j<=n;j+=1)
                    p[i*j]=0;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
            if(p[i]==1)
                ans+=1;
        return ans;
    }
};
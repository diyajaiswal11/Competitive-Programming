//https://leetcode.com/problems/closest-divisors/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> closestDivisors(int n) {
        
        int n1=n+1,n2=n+2;
        vector<int>v1;
        vector<int>v2;
        for (int i=1; i<=sqrt(n1); i++) 
        { 
            if (n1%i == 0) 
            { 
                //cout<<i<<" "<<n1/i<<endl;
               v1.push_back(i);
                v1.push_back(int(n1/i));
            } 
         } 
        sort(v1.begin(),v1.end());
        for (int i=1; i<=sqrt(n2); i++) 
        { 
            if (n2%i == 0) 
            { 
                //cout<<i<<" "<<n2/i<<endl;
               v2.push_back(i);
                v2.push_back(int(n2/i));
            } 
         }
        sort(v2.begin(),v2.end());
        int s1=v1.size()/2,s2=v2.size()/2;
        int a=v1[s1]-v1[s1-1],b=v2[s2]-v2[s2-1];
        if(a<b)
            return {v1[s1],v1[s1-1]};
        else
            return {v2[s2],v2[s2-1]};
    }
};
//https://leetcode.com/problems/binary-number-with-alternating-bits/

#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>
class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        bool x=false;
        long long int s1=0,s2=0;
        for(int i=0;i<=31&&s1<=n;i+=2)
        {
            s1+=pow(2,i);
            if(s1==n)
            {
                x=true;
                break;
            }
        }
        for(int i=1;i<=31&&s2<=n;i+=2)
        {
            s2+=pow(2,i);
            if(s2==n)
            {
                x=true;
                break;
            }
        }
        return x;
        
        
    }
};
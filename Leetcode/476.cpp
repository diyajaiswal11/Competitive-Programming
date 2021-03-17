//https://leetcode.com/problems/number-complement/

#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>
class Solution {
public:
    int findComplement(int n) {
        
        int pos=-1;
        for(int i=0;i<=31;i++)
        {
            if(n&(1<<i))
                pos=i;
        }
        int m=pow(2,pos+1)-1;
        return m^n;
        
    }
};
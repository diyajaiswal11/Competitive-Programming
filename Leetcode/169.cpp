//https://leetcode.com/problems/majority-element/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int n=a.size(),maj=0,c=1;
        for(int i=1;i<n;i++)
        {
            if(a[maj]==a[i])
                c+=1;
            else
                c-=1;
            if(c==0)
            {
                maj=i;
                c=1;
            }
        }
        return a[maj];
    }
};
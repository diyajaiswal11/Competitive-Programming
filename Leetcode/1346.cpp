//https://leetcode.com/problems/check-if-n-and-its-double-exist/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& a) {
        
        sort(a.begin(),a.end());
        int n=a.size(),flag=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]*2==a[j]||a[i]==a[j]*2)
                {
                    return true;
                }
            }
            
        }
        return false;
        
        
    }
};
//https://leetcode.com/problems/move-zeroes/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& a) {
        
        int i=0,j=0,n=a.size();
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                j+=1;
            }
        }
        
    }
};
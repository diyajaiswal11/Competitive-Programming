//https://leetcode.com/problems/plus-one/


#include <bits/stdc++.h> 
using namespace std;
#include<vector>

class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        
        int n=a.size();
        if(a[n-1]!=9)
        {
            a[n-1]+=1;
            return a;
        }
        else
        {
            int c=0;
            for(int i=0;i<n;i++)
                if(a[i]==9)
                    c+=1;
            if(c==n)
            {
                for(int i=0;i<n;i++)
                    a[i]=0;
                a.insert(a.begin(),1);
                return a;
            }
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]==9)
                    a[i]=0;
                else
                {
                    a[i]+=1;
                    break;
                }
            }
            return a;
        }
            
        
    }
};
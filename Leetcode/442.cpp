//https://leetcode.com/problems/find-all-duplicates-in-an-array/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        
        int n=a.size(),i=0;
        vector<int>ans; int temp=0;
        while(i<n)
        {
            if(a[i]!=i+1&&a[a[i]-1]!=a[i])
            {
                temp=a[i];
                a[i]=a[temp-1];
                a[temp-1]=temp;
            }
            else
                i+=1;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=i+1)
                ans.push_back(a[i]);
            
        }
        return ans;
    }
};
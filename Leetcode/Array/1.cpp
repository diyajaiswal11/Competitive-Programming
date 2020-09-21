//https://leetcode.com/problems/two-sum/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int x) {
        vector<int>b;
        for(int i=0;i<a.size();i++)
        {
            b.push_back(a[i]);
        }
        sort(a.begin(),a.end());
        int i=0,j=a.size()-1,p=-1,q=-1;
        while(i<j)
        {
            if(a[i]+a[j]<x)
                i+=1;
            else if(a[i]+a[j]>x)
                j-=1;
            else
                break;
        }
        if(a[i]!=a[j])
        {
            for(int y=0;y<a.size();y++)
            {
                if(a[i]==b[y])
                    p=y;
                if(a[j]==b[y])
                    q=y;
            }
        }
        else
        {
            for(int y=0;y<a.size();y++)
            {
                if(a[i]==b[y]&&p==-1)
                {
                    p=y;
                }   
                if(a[j]==b[y]&&y!=p&&p!=-1)
                    q=y;
            }
        }
        return {p,q};
    }
};
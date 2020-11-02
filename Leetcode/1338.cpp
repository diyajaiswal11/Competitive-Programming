//https://leetcode.com/problems/reduce-array-size-to-the-half/


#include <bits/stdc++.h> 
using namespace std;


class Solution {
public:
    int minSetSize(vector<int>& a) {
        
        map<int,int>m;
        for(int i=0;i<a.size();i++)
        {
            if(m.find(a[i])==m.end())
                m[a[i]]=1;
            else
                m[a[i]]+=1;
        }
        vector<int>v;
        int ans=0,c=0;
        for(auto &it : m)
        {
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--)
        {
            if(ans>=a.size()/2)
                break;
            ans+=v[i];
            c+=1;
        }
        return c;
        
    }
};
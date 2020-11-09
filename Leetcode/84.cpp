//https://leetcode.com/problems/largest-rectangle-in-histogram/


#include <bits/stdc++.h> 
using namespace std;

#include<vector>
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        
        //nsr
        stack<pair<int,int>>s;
        vector<int>v;
        int n=h.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s.size()==0)
                v.push_back(n);
            else if(s.size()>0&&s.top().first<h[i])
                v.push_back(s.top().second);
            else if(s.size()>0&&s.top().first>=h[i])
            {
                while(s.size()>0&&s.top().first>=h[i])
                    s.pop();
                if(s.size()==0)
                    v.push_back(n);
                else
                    v.push_back(s.top().second);
            }
            s.push({h[i],i});
        }
        reverse(v.begin(),v.end());
        
        //nsl
        stack<pair<int,int>>s1;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            if(s1.size()==0)
                v1.push_back(-1);
            else if(s1.size()>0&&s1.top().first<h[i])
                v1.push_back(s1.top().second);
            else if(s1.size()>0&&s1.top().first>=h[i])
            {
                while(s1.size()>0&&s1.top().first>=h[i])
                    s1.pop();
                if(s1.size()==0)
                    v1.push_back(-1);
                else
                    v1.push_back(s1.top().second);
            }
            s1.push({h[i],i});
        }
        
        
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(mx<=(v[i]-v1[i]-1)*h[i])
                mx=(v[i]-v1[i]-1)*h[i];
        }
        
        return mx;
    }
};
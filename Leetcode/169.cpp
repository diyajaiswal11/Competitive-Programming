//https://leetcode.com/problems/majority-element/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int n=a.size(),c=0,ans=0;
        if(n%2==0)
            n=n/2;
        else
            n=n/2+1;
        set<int> s; 
        for(int x:a) 
        {
            s.insert(x);
        } 
        for(auto it=s.begin(); it != s.end(); ++it) 
        {
            c=count(a.begin(), a.end(),*it);
            //cout<<c<<" ";
            if(c>=n)
            {
                ans=*it;
                break;
            }
        }
        return ans;
    }
};
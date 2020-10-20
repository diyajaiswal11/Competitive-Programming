//https://leetcode.com/problems/intersection-of-two-arrays/



#include <bits/stdc++.h> 
using namespace std;
#include <set>
class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int l=a.size();
        int m=b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> c; 
        set<int> s; 
        for(int i=0,j=0;i<l&&j<m;)
        {
            if(a[i]==b[j])
            {
                s.insert(a[i]);
                i+=1;
                j+=1;
            }
            else if(a[i]>b[j])
            {
                j+=1;
            }
            else if(a[i]<b[j])
            {
                i+=1;
            }
        }
        
        for (auto x : s) 
        { 
            c.push_back(x); 
        } 
        return c;
    }
};
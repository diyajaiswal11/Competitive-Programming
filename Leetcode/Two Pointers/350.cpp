//https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        vector<int>c;
        while(i<a.size()&&j<b.size())
        {
            if(a[i]==b[j])
            {
                c.push_back(a[i]);
                i+=1;
                j+=1;
            }
            else if(a[i]>b[j])
            {
                j+=1;
            }
            else
                i+=1;
        }
        return c;
    }
};
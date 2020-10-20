//https://leetcode.com/problems/find-the-duplicate-number/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& a) {
        sort(a.begin(),a.end());
        int l=a.size(),i=0;
        for(i=1;i<l;i++)
        {
            if(a[i]==a[i-1])
            {
                break;
            }
                
        }
      return a[i];
    }
};
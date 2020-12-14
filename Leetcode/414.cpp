// https://leetcode.com/problems/third-maximum-number/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& a) {
        
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
       
        for(int i=0;i<a.size()-1;)
        {
            if(a[i]==a[i+1])
                a.erase(a.begin()+i);
            else 
                i+=1;        
        }
      
        if(a.size()<=2)
            return a[0];
        else
            return a[2];
        
        
    }
};
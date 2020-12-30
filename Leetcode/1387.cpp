//https://leetcode.com/problems/sort-integers-by-the-power-value/



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ans(int x){
        int c=0;
        while(x!=1)
        {
            if(x%2==0)
                x=x/2;
            else
                x=3*x+1;
            c+=1;
        }
        return c;
    }
    int getKth(int lo, int hi, int k) {
        
        vector<pair<int,int>>a(hi-lo+1);
        
        for(int i=lo;i<=hi;i++){
            int c = ans(i);
            a[i-lo] = {c,i};
        }
        sort(a.begin(), a.end());
        return a[k-1].second;
    }
};
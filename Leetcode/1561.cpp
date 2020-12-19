//https://leetcode.com/problems/maximum-number-of-coins-you-can-get/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int maxCoins(vector<int>& a) {
        
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int n=a.size(),sum=0,c=0;
        for(int i=1;i<n;i+=2)
        {
            sum+=a[i];
            c+=1;
            if(c==n/3)
                break;
        }
        return sum;
    }
};
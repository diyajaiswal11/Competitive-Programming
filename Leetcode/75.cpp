//https://leetcode.com/problems/sort-colors/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                a+=1;
            else if(nums[i]==1)
                b+=1;
            else
                c+=1;
        }
        while(a>0)
        {
            nums[j]=0;
            j+=1;
            a-=1;
        }
        while(b>0)
        {
            nums[j]=1;
            j+=1;
            b-=1;
        }
        while(c>0)
        {
            nums[j]=2;
            j+=1;
            c-=1;
        }
        
    }
};
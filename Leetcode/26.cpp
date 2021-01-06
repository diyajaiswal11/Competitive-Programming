//https://leetcode.com/problems/remove-duplicates-from-sorted-array/


#include <bits/stdc++.h> 
using namespace std;

#include <iostream>
#include <vector>
class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        
        if(a.size()==0)
            return 0;
        int n=a.size();
        for(int i=0;i<a.size()-1;)
        {
            if(a[i]==a[i+1])
                a.erase(a.begin()+i);
            else
                i+=1;
                
        }
        return a.size();
       
    }
};
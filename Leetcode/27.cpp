//https://leetcode.com/problems/remove-element/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& a, int x) {
        int c=0,ele=0;
        for(int i=0;i<a.size();i++)
        {
           if(a[i]!=x)
           {
               a[ele]=a[i];
               ele+=1;
           }
        }
        return ele;
    }
};
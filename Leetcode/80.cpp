//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/


#include <bits/stdc++.h> 
using namespace std;
#include <vector>
class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        
        if(a.size()<=2)
            return a.size();
        for(int i=1;i<a.size()-1;)
        {
            if(a[i]==a[i-1]&&a[i]==a[i+1])
                a.erase(a.begin()+i);
            else
                i+=1;
        }
        return a.size();
    }
};
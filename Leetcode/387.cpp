//https://leetcode.com/problems/first-unique-character-in-a-string/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        
        map<int,int>m;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            m[s[i]]+=1;
        }
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]==1){
                return i;
            }
        }
        return -1;
        
    }
};
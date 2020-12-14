//https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        
        
        vector<int>a(26);
        fill(a.begin(), a.end(), 0);
        for(int i=0;i<s.length();i++)
        {
            a[int(s[i])-97]+=1;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(a[int(t[i])-97]>0)
                a[int(t[i])-97]-=1;
        }
        int sum=0;
        for(int i=0;i<26;i++)
            sum+=a[i];
        return sum;
    }
};
//https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        
        string s1="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(int(s[i])>=97&&int(s[i])<=122 || int(s[i])>=48&&int(s[i])<=57)
                s1+=s[i];
            else if(int(s[i])>=65&&int(s[i])<=90)
                s1+=(s[i]+32);
        }
        
        for(int i=0;i<s1.length()/2;i++)
        {
            if(s1[i]!=s1[s1.length()-1-i])
                return false;
        }
        return true;
        
    }
};
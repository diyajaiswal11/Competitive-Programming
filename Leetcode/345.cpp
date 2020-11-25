//https://leetcode.com/problems/reverse-vowels-of-a-string/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        
        string p;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                p+=s[i];
        }
        reverse(p.begin(),p.end());
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                s[i]=p[j];
                j+=1;
            }
        }
        return s;
        
    }
};
#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int n=s.length();
        int i=0,j=n-1;
        while(i<j)
        {
            if(!isalpha(s[i]))
                i+=1;
            else if(!isalpha(s[j]))
                j-=1;
            else
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i+=1;
                j-=1;
            }
        }
        return s;
    }
};
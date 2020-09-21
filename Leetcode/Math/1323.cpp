//https://leetcode.com/problems/maximum-69-number/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int maximum69Number (int a) {
        string s = to_string(a);
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='6')
            {
                s[i]='9';
                flag+=1;
            }
            if(flag==1)
                break;
        }
        return stoi(s);
    }
};
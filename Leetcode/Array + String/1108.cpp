//https://leetcode.com/problems/defanging-an-ip-address/



#include <bits/stdc++.h> 
using namespace std;

#include<algorithm>
class Solution {
public:
    string defangIPaddr(string a) {
        string s="";
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='.')
                s+="[.]";
            else
                s+=a[i];
        }
        return s;
    }
};
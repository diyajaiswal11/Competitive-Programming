#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>


class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n=s.size();
        char a=0;
        for(int i=0;i<n;i++)
            a=a^s[i];
        for(int i=0;i<n+1;i++)
            a=a^t[i];
        return a;
    }
};
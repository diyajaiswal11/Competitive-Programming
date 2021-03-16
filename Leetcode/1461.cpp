//https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/


#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        set<string>s1;
        int n=s.size();
        for(int i=0;i<=n-k;i++)
            s1.insert(s.substr(i,k));
        
        return s1.size() == pow(2,k);
    }
};
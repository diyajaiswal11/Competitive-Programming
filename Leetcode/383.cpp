#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>


class Solution {
public:
    bool canConstruct(string r, string m) {
        
        map<char,int>mp;
        for(int i=0;i<m.size();i++)
            mp[m[i]]+=1;
        for(int i=0;i<r.size();i++)
            mp[r[i]]-=1;
        for(auto i:mp)
        {
            if(i.second<0)
                return false;
        }
        return true;
    }
};
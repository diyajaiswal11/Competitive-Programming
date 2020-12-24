//https://leetcode.com/problems/find-and-replace-pattern/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& s, string p) {
        
        int n=s.size(),l=p.length();
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
            int flag=0;
            map<char,char>m;
            string s1=s[i];
            for(int j=0;j<l;j++)
            {
                if(m.find(p[j])==m.end())
                    m[p[j]]=s1[j];
                else
                {
                    if(m[p[j]]!=s1[j])
                    {
                        flag=1;
                        break;
                    }
                    
                }
                int c=0;
                for (auto it : m) { 
                    if (it.second == s1[j]) {
                        c+=1;

                    } 
                }
                if(c>1)
                {
                    flag=1;
                        break;
                }
  
            }
            if(flag==0)
                ans.push_back(s1);
        }
        return ans;
    }
};
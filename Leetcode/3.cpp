//https://leetcode.com/problems/longest-substring-without-repeating-characters/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i=0,j=0,ans,n=s.length();
        map<int,int>m;
        while(j<n)
        {
            if(m[int(s[j])]==0)
            {
                m[int(s[j])]+=1;
                j+=1;
                int c=0;
                for(auto x : m)
                    c+=x.second;
                if(c>ans)
                    ans=c;
            }
            else
            {
                m[int(s[i])]=0;
                i+=1;
            }    
        }
        return ans;

    }
};
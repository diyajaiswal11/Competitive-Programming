//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;
        string ans;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(st.size()>0&&st.top()==s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(st.size()>0)
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>


class Solution {
public:
    vector<string> printVertically(string s) {
        
        string temp = "";
        int n=s.length();
        vector<string>v;
	    for(int i=0;i<n;i++)
        {
		    if(s[i]==' ')
            {
                v.push_back(temp);
                temp = "";
		    }
		    else
			    temp.push_back(s[i]);
        }
	    v.push_back(temp);
       
        vector<string>ans;
        int mx=0;
        for(int i=0;i<v.size();i++)
        {
            if(mx<v[i].length())
                mx=v[i].length();
        }
        for(int i=0;i<mx;i++)
        {
            string p="",q="";
            for(int j=0;j<v.size();j++)
            {
                if(v[j].length()>=i+1)
                    p+=v[j][i];
                else
                    p+=" ";
            }
            reverse(p.begin(),p.end());
            int pos=0;
            for(;pos<p.length();pos++)
            {
                if(p[pos]!=' ')
                    break;
            }
            q=p.substr(pos);
            reverse(q.begin(),q.end());
            ans.push_back(q);
        }
        return ans;
    }
};
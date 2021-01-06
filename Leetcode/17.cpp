//https://leetcode.com/problems/letter-combinations-of-a-phone-number/


#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>
class Solution {
public:
    vector<string> letterCombinations(string d) {
        
        int n=d.length();
        if(n==0)
            return {};
        map<int,string>m;
        vector<string>a;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        
        cout<<int(d[0])-48<<endl;
        if(n==1)
        {
            string x=m[int(d[0])-48];
            for(int i=0;i<x.length();i++)
            {
                string q="";
                q+=x[i];
                a.push_back(q);
            }
        }
        else if(n==2)
        {
            string s1=m[int(d[0])-48],s2=m[int(d[1])-48];
            for(int i=0;i<s1.length();i++)
            {
                for(int j=0;j<s2.length();j++)
                {
                    string q="";
                    q+=s1[i];
                    q+=s2[j];
                    a.push_back(q);
                }
            }
        }
        else if(n==3)
        {
            string s1=m[int(d[0])-48],s2=m[int(d[1])-48],s3=m[int(d[2])-48];
            for(int i=0;i<s1.length();i++)
            {
                for(int j=0;j<s2.length();j++)
                {
                    for(int k=0;k<s3.length();k++)
                    {
                         string q="";
                        q+=s1[i];
                        q+=s2[j];
                        q+=s3[k];
                        a.push_back(q);
                    }
                }
            }
        }
        else if(n==4)
        {
            string s1=m[int(d[0])-48],s2=m[int(d[1])-48],s3=m[int(d[2])-48],s4=m[int(d[3])-48];
            for(int i=0;i<s1.length();i++)
            {
                for(int j=0;j<s2.length();j++)
                {
                    for(int k=0;k<s3.length();k++)
                    {
                        for(int l=0;l<s4.length();l++)
                        {  
                            string q="";
                            q+=s1[i];
                            q+=s2[j];
                            q+=s3[k];
                            q+=s4[l];
                            a.push_back(q);
                        }
                    }
                }
            }
        }
        
        return a;
        
    }
};
//https://leetcode.com/problems/string-to-integer-atoi/


#include <iostream> 
#include <sstream> 
class Solution {
public:
    int myAtoi(string s) {
    
        int n=s.length(),i=0,flag=0;
        long long int ans=0;
        while(s[i]==' ')
            i+=1;
        if(s[i]=='+')
        {
            flag=1;
            i+=1;
        } 
        else if(s[i]=='-')
        {
            flag=-1;
            i+=1;
        }
        string x="";
        while(int(s[i])>=48&&int(s[i])<=57)
        {
            x+=s[i];
            i+=1;
        }
        stringstream p(x);
        p>>ans;
        if(flag!=0)
            ans*=flag;
        if(ans<=INT_MIN)
        {
            return INT_MIN;
        }    
        else if(ans>=INT_MAX)
        {
            return INT_MAX;
        }
        else if(ans==0)
            return 0;
        else
        {
            return ans;
        }
        
    }
};
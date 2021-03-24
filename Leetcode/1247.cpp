#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    int minimumSwap(string a, string b) {
        
        int n=a.length(),x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]=='x')
                    x+=1;
                else
                    y+=1;
            }
        }
        int ans=0;
        while(x>=2)
        {
            ans+=1;
            x-=2;
        }
        while(y>=2)
        {
            ans+=1;
            y-=2;
        }
        if(x==1&&y==1)
            ans+=2;
        else if(!(x==0&&y==0))
            ans=-1;
        return ans;
        
    }
};
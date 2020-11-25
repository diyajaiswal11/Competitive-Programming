// https://leetcode.com/problems/four-divisors/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& a) {
        
        int n=a.size(),ans=0;
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            vector<int>b;
            for(int j=1;j<=sqrt(x);j++)
            {
                if(x%j==0)
                {
                   if(x/j==j)
                       b.push_back(j);
                    else
                    {
                        b.push_back(j);
                        b.push_back(x/j);
                    }
                }
            }
            for(int m=0;m<b.size();m++)
                cout<<b[m]<<" ";
            cout<<endl;
            if(b.size()==4)
            ans+=(b[0]+b[1]+b[2]+b[3]);
            
        }
        return ans;
    }
};
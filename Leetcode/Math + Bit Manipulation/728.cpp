//https://leetcode.com/problems/self-dividing-numbers/



#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int>ans;
        for(int i=l;i<=r;i++)
        {
            int j=i,f=0;
            while(j>0)
            {
                if(j%10==0)
                {
                    f=1;
                    break;
                }
                if(i%(j%10)!=0)
                {
                    f=1;
                    break;
                }
                j=j/10;
            }
            if(f==0)
                ans.push_back(i);
        }
        return ans;
    }
    
};
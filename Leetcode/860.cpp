//https://leetcode.com/problems/lemonade-change/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int c5=0,c10=0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]==5)
                c5++;
            else if(b[i]==10)
            {
               if(c5==0)
                   return false;
                c5--;
                c10++;
            }
            else if(b[i]==20)
            {
               if(c5>0&&c10>0)
               {
                   c5--;
                   c10--;
               }
                else if(c5>=3)
                    c5-=3;
                else
                    return false;
            }
        }
        return true;
    }
};
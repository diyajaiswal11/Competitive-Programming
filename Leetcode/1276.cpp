//https://leetcode.com/problems/number-of-burgers-with-no-waste-of-ingredients/


#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        
        vector<int>a;
        if(t==0&&c==0)
            return {0,0};
        else if(t==0||c==0)
            return a;
        else if(t%2!=0||t<c||t/c>4||t/c<2)
            return a;
        else if(t==2*c)
            return {0,c};
        else if(t==4*c)
            return {0,c};
        
        else
        {
            int jb=0,sb=0;
            while(t>=4&&c>=1)
            {
                t-=4;
                c-=1;
                jb+=1;
                if(t==2*c)
                    break;
            }
            while(t>=2&&c>=1)
            {
                t-=2;
                c-=1;
                sb+=1;
            }
            if(t==0&&c==0)
                return {jb,sb};
            else
                return a;
        }
        
        
    }
};
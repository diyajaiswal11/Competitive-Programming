//https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/


class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int ans=0;
        for(int i=0;i<=31;i++)
        {
            bool c1=false;
            if(c&(1<<i))
                c1=true;
            bool a1=false,b1=false;
            if(a&(1<<i))
                a1=true;
            if(b&(1<<i))
                b1=true;
            
            if(c1)
            {
                if(!a1 & !b1)
                    ans+=1;
            }
            else
            {
                if(a1&b1)
                    ans+=2;
                else if(a1& !b1)
                    ans+=1;
                else if(!a1 &b1)
                    ans+=1;
            }
            
        }
        return ans;
        
    }
};
//https://leetcode.com/problems/power-of-four/


class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n<=0)
            return false;
        int ans=0,m=n;
        while(n>0)
        {
            n=n>>1;
            ans+=1;
        }
        if(ans%2!=0&& !(m&(m-1)))
            return true;
        else
            return false;
            
        
    }
};
//https://leetcode.com/problems/perfect-number/


class Solution {
public:
    bool checkPerfectNumber(int a) {
        if(a==0)
            return false;
        int i=a/2,s=0;
        while(i>0)
        {
            if(a%i==0)
                s+=i;
            i-=1;
        }
        
        if(a==s)
            return true;
        else
            return false;
    }
};
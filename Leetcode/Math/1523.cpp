//https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/



class Solution {
public:
    int countOdds(int l, int h) {
        if(l%2==0)
            l+=1;
        if(h%2==0)
            h-=1;
        return (h-l)/2+1;
    }
};
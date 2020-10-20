//https://leetcode.com/problems/add-digits/


class Solution {
public:
    int addDigits(int a) {
        if(a==0)
            return 0;
        else if(a%9==0)
            return 9;
        else
        return a%9;
    }
};
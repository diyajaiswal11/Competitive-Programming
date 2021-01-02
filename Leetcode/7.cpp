//https://leetcode.com/problems/reverse-integer/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        while(x!=0)
        {
            if (rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;
            rev=rev*10+x%10;
            x/=10;
        }
        return rev;
    }
};
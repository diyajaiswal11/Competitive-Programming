//https://leetcode.com/problems/divisor-game/


#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool divisorGame(int n) {
        if(n%2==0)
            return true;
        else
            return false;
    }
};
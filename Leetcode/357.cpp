//https://leetcode.com/problems/count-numbers-with-unique-digits/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector<int>a={1,10,91,739,5275,32491,168571,712891,2345851};
        return a[n];
    }
};
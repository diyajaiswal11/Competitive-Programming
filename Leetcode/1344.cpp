//https://leetcode.com/problems/angle-between-hands-of-a-clock/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    double angleClock(int h, int m) {
        
        double mangle=m*6;
        double hangle=h*30+double(m)/2;
        double ans=abs(hangle-mangle);
        return min(ans,360-ans);
        
    }
};
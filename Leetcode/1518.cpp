//https://leetcode.com/problems/water-bottles/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        if(nb==ne)
            return ne+1;
        else if(nb<ne)
            return nb;
        else
        {
            int ans=nb;
            while(ne<=nb)
            {
                ans+=int(nb/ne);
                nb=int(nb/ne)+nb%ne;
            }
            return ans;
        }
            
        
        
    }
};
// 1518. Water Bottles
// Share
// Given numBottles full water bottles, you can exchange numExchange empty water bottles for one full water bottle.

// The operation of drinking a full water bottle turns it into an empty bottle.

// Return the maximum number of water bottles you can drink.

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
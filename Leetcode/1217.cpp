class Solution {
public:
    int minCostToMoveChips(vector<int>& a) {
        
        int n=a.size(),even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                even+=1;
            else
                odd+=1;
        }
        if(odd<even)
            return odd;
        else
            return even;
    }
};
//https://leetcode.com/problems/find-the-highest-altitude/


class Solution {
public:
    int largestAltitude(vector<int>& a) {
        
        int n=a.size(),s=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(s>m)
                m=s;
            s=s+a[i];
        }
        if(s>m)
            m=s;
        return m;
        
    }
};
//https://leetcode.com/problems/first-bad-version/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int l=1,h=n,m=0;
        while(l<=h)
        {
            m=(l+h)/2;
            if(isBadVersion(m)&& !isBadVersion(m-1))
                return m;
            else if(isBadVersion(m)==true)
                h=m-1;
            else
                l=m+1;
        }
        return m;
        
    }
};
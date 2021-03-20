class Solution {
public:
    bool isPrime(int n)
    {
        if(n==1)
            return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    int countPrimeSetBits(int l, int r) {
        
        int ans=0;
        for(int i=l;i<=r;i++)
        {
            int m=i,c=0;
            while(m>0)
            {
                c+=1;
                m=m&(m-1);
            }
            if(isPrime(c))
                ans+=1;
        }
        return ans;
        
    }
};
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& a, int k) {
        
        sort(a.begin(),a.end());
        int n=a.size(),neg=0,zero=0,pos=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
                neg+=1;
            if(a[i]==0)
                zero+=1;
            else
                pos+=1;
        }
        if(neg>0)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]<0&&k>0)
                {
                    a[i]*=(-1);
                    k-=1;
                }
            }
        }
        if(zero>0&&k>0)
        {
            k=0;
        }
        if(k>0)
        {
            sort(a.begin(),a.end());
            while(k)
            {
                k-=1;
                a[0]*=(-1);
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            //cout<<a[i]<<" ";
        }
            
        return sum;
    }
};
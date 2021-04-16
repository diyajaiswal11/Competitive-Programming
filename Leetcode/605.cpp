class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int k) {
        
        int n=a.size(),ans=0;
        if(n==1&&a[0]==0&&k<=1)
            return true;
        if(a[0]==0&&a[1]==0)
        {
            ans+=1;
            a[0]=1;
        } 
        for(int i=1;i<n-1;i++)
        {
            if(a[i]==0&&a[i-1]==0&&a[i+1]==0)
            {
                a[i]=1;
                ans+=1;
            }
        }
        if(a[n-1]==0&&a[n-2]==0)
        {
            a[n-1]=1;
            ans+=1;
        }
        if(ans>=k)
            return true;
        else
            return false;
    }
};
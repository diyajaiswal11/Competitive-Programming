class Solution {
public:
    int maxIceCream(vector<int>& a, int m) {
        
        sort(a.begin(),a.end());
        int n=a.size(),ans=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]+ans<=m)
            {
                ans+=a[i];
                c+=1;
            }      
        }
        return c;
    }
};
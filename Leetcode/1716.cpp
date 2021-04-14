class Solution {
public:
    int totalMoney(int n) {
        
        int x=n/7,y=n%7,ans=0;
        if(n<=7)
            return (n*(n+1))/2;
        ans+=28*x+((x*(x-1))/2)*7;
        //cout<<ans<<endl;
        int m=x+1;
        for(int i=1;i<=y;i++)
        {
            ans+=m;
            //cout<<ans<<endl;
            m+=1;
        }
        return ans;
    }
};
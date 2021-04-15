class Solution {
public:
    int fib(int n) {
        
        vector<int>a(n+5);
        a[0]=0,a[1]=1;
        cout<<a[0];
        for(int i=2;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        return a[n];
            
    }
};
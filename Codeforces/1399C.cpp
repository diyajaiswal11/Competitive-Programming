#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define MAX 1000000
#define mod 1000000007
#define ll long long int
#define ld long double
#define ullunsigned long long
#define li long int
#define str string
#define fr(i,n) for(ll i = 0; i<n; i++)
#define frj(j,i,n) for(ll j = i; j<n; j++)
#define frev(i,n) for(ll i = n-1; i>=0; i--)
#define all(x) x.begin(),x.end()
int main() {
        ll t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            vector<ll> a(n),b(n);
            fr(i,n)
            {
                cin>>a[i];
                b[i]=0;
            }
            sort(a.begin(),a.end());
            if(n==1)
            cout<<"0"<<endl;
            else
            {
                int mins=a[0]+a[1];
                int maxs=a[n-1]+a[n-2];
                int ans=0;
                for(int s=mins;s<=maxs;s++)
                {
                    fr(i,n)
                    {
                        b[i]=0;
                    }
                    int c=0;
                    for(int i=0;i<n;i++)
                    {
                        for(int j=i+1;j<n;j++)
                        {
                            if(a[i]+a[j]==s&&b[i]!=-1&&b[j]!=-1)
                            {
                                b[i]=-1;
                                b[j]=-1;
                                c+=1;
                            }
                            
                        }
                    }
                    if(c>ans)
                    ans=c;
                }
                cout<<ans<<endl;
            }
        }
        
        
    }

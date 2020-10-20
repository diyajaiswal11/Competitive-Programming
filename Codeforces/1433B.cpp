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
#define fr(i,n) for(ll i = 0; i<n; i++)
#define frj(j,i,n) for(ll j = i; j<n; j++)
#define frev(i,n) for(ll i = n-1; i>=0; i--)
int main() {
        ll t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            vector<int>a(n);
            fr(i,n)
            cin>>a[i];
            ll x=0,ans=0,pl=-1,pr=-1;
            fr(i,n)
            {
                if(a[i]==1)
                {
                    pl=i;
                    break;
                }
            }
            frev(i,n)
            {
                if(a[i]==1)
                {
                    pr=i;
                    break;
                }
            }
            for(int i=pl;i<=pr;i++)
            {
                if(a[i]==0)
                ans+=1;
            }
            cout<<ans<<endl;
        }
    }
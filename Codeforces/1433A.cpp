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
            ll x,ans=0,c=0;
            cin>>x;
            ll p=x%10;
            ans+=(p-1)*10;
            while(x)
            {
                x=x/10;
                c+=1;
            }
            if(c==1)
            ans+=1;
            else if(c==2)
            ans+=3;
            else if(c==3)
            ans+=6;
            else
            ans+=10;
            cout<<ans<<endl;
        }
    }
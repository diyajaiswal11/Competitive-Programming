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
        ll n,so=0,sz=0;
        cin>>n;
        vector<ll> a(n);
        fr(j,n)
        {
            cin>>a[j];
            so+=a[j];
        }
        sz=n-so;
        if(sz>=so)
        {
            cout<<sz<<endl;
            fr(i,sz)
            cout<<0<<" ";
            cout<<endl;
        }
        else
        {
            if(so%2!=0)
            so-=1;
            cout<<so<<endl;
            fr(i,so)
            cout<<1<<" ";
            cout<<endl;
            
        }
        
    }
	return 0;
}

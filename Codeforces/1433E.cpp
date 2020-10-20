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
ll fact(ll n) 
{ 
    ll res = 1; 
    for (ll i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
}
int main() {
            ll n;
            cin>>n;
            ll ncr=fact(n) / (fact(n/2) * fact(n/2));
            ll n2f=fact(n/2);
            ll den=2*(n/2)*(n/2);
            ll ans=(ncr*n2f*n2f)/(den);
            //cout<<fact(n)<<" "<<fact(n/2)<<" "<<ncr<<" "<<n2f<<" "<<den<<endl;
            cout<<ans;
    }
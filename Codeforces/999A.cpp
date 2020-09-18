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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        fr(i,n)
        {
            cin>>a[i];
        }
        ll i=0,j=n-1,c=0;
        while(i<n)
        {
            if(a[i]<=k)
            {
                i+=1;
                c+=1;
            }
            else if(a[j]<=k)
            {
                j-=1;
                c+=1;
            }
            else
            break;
        }
        cout<<c;
    }

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
            int n=3;
            vector<ll> a(3),b(3);
            fr(i,n)
                cin>>a[i];
            fr(i,n)
                cin>>b[i];
                
            ll ans=std::min(a[2],b[1]);
            a[2]-=ans;
            b[1]-=ans;
            ans*=2;
            ll p=std::min(a[0],b[2]);
            a[0]-=p;
            b[2]-=p;
            p=std::min(a[1],b[0]);
            a[1]-=p;
            b[0]-=p;
            
            ans-=((std::min(a[1],b[2]))*2);
            cout<<ans;
            cout<<endl;
            
        }
        
    }

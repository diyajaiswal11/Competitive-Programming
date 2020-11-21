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
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        fr(i,q)
        {
            ll l,r;
            cin>>l>>r;
            l-=1;
            r-=1;
            string sub;
            
            ll j=0;
            bool t1=false,t2=false;
            for(int i=0;i<l;i++)
            {
                if(s[i]==s[l])
                {
                    t1=true;
                    break;
                }
            }
            for(int i=r+1;i<n;i++)
            {
                if(s[i]==s[r])
                {
                    t2=true;
                    break;
                }
            }
            if(t1==true||t2==true)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
            
        }
    }
        
          
    }

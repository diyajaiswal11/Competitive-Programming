#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream> 
#include <sstream>  // for string streams 
#include <string>  
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

	   vector<ll>a(n);
	   for(ll i=0;i<n;i++)
		   cin>>a[i];

		ll k=0,f=1;
		for(ll i=0;i<60;i++)
		{
			ll c0=0,c1=0;
			for(ll j=0;j<n;j++)
			{
				if(a[j]&(f<<i))
				c1+=1;
			}
			c0=n-c1;
			if(c1>c0)
			k+=(f<<i);
		}
		cout<<k<<endl;

       
    }
}

   
   

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
   ll n,m,k,ans=0;
   cin>>n>>m>>k;
   fr(i,n)
   {
      ll min=0;
      ll qt=0;
      for(ll j=0;j<k+1;j++)
      {
         ll a;
         cin>>a;
         if(j<k)
         {
           
            min+=a;
         }
         else
         qt=a;
      }
      //cout<<min<<" "<<qt<<endl;
      if(min>=m&&qt<=10)
      ans+=1;
   }cout<<ans;
   
   
}

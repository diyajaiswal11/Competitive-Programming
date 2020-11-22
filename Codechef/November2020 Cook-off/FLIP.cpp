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
   string a,b;
   cin>>a>>b;
   ll n=a.size(),ans=0,c=0;
   if(a==b)
   {
      cout<<"0"<<endl;
   }
   else
   {
   for (ll i=1;i<n;i+=2) 
   {
      if(a[i]!=b[i]) 
      c+=1;
      else 
      {
         if(c>0) 
         ans+=1;
         c=0;
      }
   }
   if(c>0)
   ans+=1;
   c=0;
   for (ll i=0;i<n;i+=2) 
   {
      if(a[i]!=b[i]) 
      c+=1;
      else 
      {
         if(c>0) 
         ans+=1;
         c=0;
      }
   }
   if(c>0)
   ans+=1;
   cout<<ans<<endl;
   }
   
   }}
   
 

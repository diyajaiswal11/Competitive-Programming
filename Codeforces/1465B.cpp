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
bool fair(ll n)
{
   ll n1=n;
   while(n!=0)
   {
      ll rem=n%10;
      if(rem!=0)
      if(n1%rem!=0)
      return false;
      n=n/10;
   }
   return true;
}
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       while(true)
       {
          if(fair(n))
          {
             cout<<n<<endl;
             break;
          }
          n+=1;
       }
    }
   }

   
   

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
         ll n,f=1;
         cin>>n;
         if(n==1)
         {
            f=0;
         }
         else
         {
            for(ll i=2;i*i<=n;i++)
            {
               if(n%i==0)
               f=0;
            }
         }
         if(f==1)
         cout<<"yes"<<endl;
         else
         cout<<"no"<<endl;
      }
   }

   
   


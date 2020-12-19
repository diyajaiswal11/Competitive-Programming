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
   while(t--){
        ll n;
      cin>>n;
      string r,b;
      cin>>r>>b;
      ll rn=0,bn=0;
      //sort(r.begin(),r.end());
      //sort(b.begin(),b.end());
      for(int i=0;i<n;i++)
      {
         if(int(r[i])>int(b[i]))
         rn+=1;
         else if(int(b[i])>int(r[i]))
         bn+=1;
         else
         {
            rn+=1;
            bn+=1;
         }
      }
      if(rn>bn)
      cout<<"RED"<<endl;
      else if(bn>rn)
      cout<<"BLUE"<<endl;
      else
      cout<<"EQUAL"<<endl;
    }
   }

   
   


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
      string s;
      cin>>s;
      if((s.substr(0,4).compare("2020")==0)||
      (s.substr(n-4,4).compare("2020")==0) ||
      ((s.substr(0,2).compare("20")==0)&&
      (s.substr(n-2,2).compare("20")==0)) ||
      ((s.substr(0,1).compare("2")==0)&&
      (s.substr(n-3,3).compare("020")==0)) ||
      ((s.substr(0,3).compare("202")==0)&&
      (s.substr(n-1,1).compare("0")==0))
      )
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
   }

   
   


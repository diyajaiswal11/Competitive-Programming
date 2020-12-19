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
      ll n;
      cin>>n;
      vector<ll>a(n+1);
      if(n==1)
      {
         cout<<"4"<<endl;
      }
      else if(n==2)
      {
         cout<<"4"<<endl;
      }
      else if(n==3)
      {
         cout<<"12"<<endl;
      }
      else if(n==4)
      {
         cout<<"9"<<endl;
      }
      else
      {
         ll b=8;
         a[0]+=-1;
         a[1]+=4;
         a[2]+=4;
         a[3]+=12;
         a[4]+=9;
         for(int i=5;i<=n;i++)
         {
            if(i%2!=0)
            b+=4;
            if(i%2!=0)
            a[i]+=(b+a[i-2]);
            else
            a[i]+=(b+a[i-4]);
         }
         cout<<a[n]<<endl;
      }
     
   }

   
   


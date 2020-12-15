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
      ll n,sum=0;
      cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
         sum+=a[i];
      }
      vector<int>fac;
      for(int i=1;i<=n;i++)
      {
         if(sum%i==0)
         fac.push_back(i);
      }
      //cout<<sum<<" - ";
      sort(fac.begin(),fac.end());
      reverse(fac.begin(),fac.end());
      for(int i=0;i<fac.size();i++)
      {
         fac[i]=sum/fac[i];
         //cout<<fac[i]<<" ";
      }
      vector<ll>ans;
      for(int i=0;i<fac.size();i++)
      {
         ll target=fac[i],s=0,count=0,flag=0;
         for(int j=0;j<=n;j++)
         {
            if(s>target)
            { flag=1;break; }
            if(s==target)
            {
               count+=1;
               s=0;
            }
            if(j!=n)
            s+=a[j];
         }
         if(flag==0)
         ans.push_back(n-count);
      }
      sort(ans.begin(),ans.end());
      
      
      cout<<ans[0]<<endl;
    }
   }

   
   
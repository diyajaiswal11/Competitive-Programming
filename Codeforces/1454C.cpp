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
   while(t--){
      ll n;
      cin>>n;
      vector<ll> a(n);
      fr(i,n)
      cin>>a[i];
      vector<ll>b;
      for(ll i=0;i<n-1;i++)
      {
         if(a[i]!=a[i+1])
         b.push_back(a[i]);
      }
      b.push_back(a[n-1]);
      if(b.size()==1)
      cout<<"0"<<endl;
      else
      {
      unordered_map<int, int> mp; 
      for (int i = 0; i < b.size(); i++) 
        mp[b[i]]++;
      
      ll m=b.size();
      mp[b[0]]-=1;
      mp[b[m-1]]-=1;
      for(auto x:mp)
      {
      //cout<<x.first<<" "<<x.second<<endl;
      }
      vector<int>c;
      for (auto x : mp) 
      {
         c.push_back(x.second+1);
      }
      sort(c.begin(),c.end());
      cout<<c[0]<<endl;
      }
      
      
    }
   }

   
   


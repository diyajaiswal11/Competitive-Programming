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
      ll n,x;
      cin>>n;
      vector<int>a;
      vector<int>b;
      vector<int>c;
      for(int i=0;i<n;i++)
      {
         cin>>x;
         a.push_back(x);
      }
     unordered_map<int, int> mp; 
      for (int i = 0; i < n; i++) 
        mp[a[i]]++;
      ll ans=200000;
      for (auto x : mp) 
      {
        if(x.second==1)
        {
           if(x.first<ans)
           ans=x.first;
        }
      }
      if(ans==200000)
      cout<<"-1"<<endl;
      else
      {
         for(int i=0;i<n;i++)
         {
            if(a[i]==ans)
            {
               cout<<i+1<<endl;
               break;
            }
         }
      }
      
  
   }
}

   
   


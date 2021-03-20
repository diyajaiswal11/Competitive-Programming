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

vector<int> p;
bool a[90000001];

void sieve()
{
   int maxn=90000000;
   a[0]=true;
   a[1]=true;
   for(int i=2;i*i<=maxn;i++)
   {
      if(!a[i])
      {
         for(int j=i*i;j<=maxn;j+=i)
         a[j]=true;
      }
   }
   for(int i=2;i<=maxn;i++)
   if(!a[i])
   p.push_back(i);
}
int main() {
      int q;
      cin>>q;
      sieve();
      while(q--)
      {
         int n;
         cin>>n;
         cout<<p[n-1]<<endl;
      }
}

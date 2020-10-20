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
            ll n;
            cin>>n;
            vector<int>a(n);
            fr(i,n)
            cin>>a[i];
            set<int> s; 
            for (int x : a) { 
            s.insert(x); 
            } 
            if(s.size()==1)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                ll mx=0,ind=-1;
                fr(i,n)
                {
                    if(a[i]>mx)
                    mx=a[i];
                }
                fr(i,n)
                {
                    if(a[i]==mx)
                    {
                       if(i-1>=0)
                       {
                           if(a[i-1]<mx)
                           {
                               ind=i;
                               break;
                           }
                       }
                       if(i+1<=n-1)
                       {
                           if(a[i+1]<mx)
                           {
                               ind=i;
                               break;
                           }
                       }
                    }
                }
                cout<<ind+1<<endl;
            }
           
        }
    }
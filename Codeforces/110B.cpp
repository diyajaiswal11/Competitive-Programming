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
#define ullunsigned long long
#define li long int
#define str string
#define fr(i,n) for(ll i = 0; i<n; i++)
#define frj(j,i,n) for(ll j = i; j<n; j++)
#define frev(i,n) for(ll i = n-1; i>=0; i--)
#define all(x) x.begin(),x.end()
int main() {
    ll n;
    cin>>n;
    string s;
    ll n4=int(n/4);
    fr(i,n4)
    s+="abcd";
    ll nm4=n%4;
    if(nm4==1)
    s+="a";
    else if(nm4==2)
    s+="ab";
    else if(nm4==3)
    s+="abc";
    cout<<s;
    
}

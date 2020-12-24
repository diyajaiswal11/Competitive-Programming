//https://leetcode.com/problems/smallest-range-ii/

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
	int smallestRangeII(vector<int>& a, int k) {
        
		sort(a.begin(),a.end());
		int n = a.size();
		int l1=a[0]+k;
		int r1=a[n-1]-k;
		int ans=a[n-1]-a[0];      
		int mn,mx;
		for (int i=0;i<n-1;i++) {
			int l2=a[i];               
			int r2=a[i+1];
			mn=min(r2-k,l1);
			mx=max(l2+k,r1);
			ans=min(ans,abs(mx-mn));
		}
		return ans;
	}
};
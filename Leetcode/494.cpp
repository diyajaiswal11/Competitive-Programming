//https://leetcode.com/problems/target-sum/



#include <bits/stdc++.h> 
using namespace std;

#include <cmath> 
class Solution {
public:
    int countsub(vector<int>&arr,int n,long s){
    int t[n+2][s+2];
    for(int i=0;i<=s;i++){      //base condn when there is given sum but array is null
        t[0][i]=0;}
     for(int i=0;i<=n;i++){     //base condn when sum is 0 we can have an empty subset so subset count is 1
          t[i][0]=1;}
          for(int i=1;i<n+1;++i)
    if(arr[i-1]==0)
    {
        // For sum 0, Empty subset + subset made by 0 element
        // By multiplying pow(2,cnt), it will consider all the subsets of 0 which was               
		// not considered earlier.
        t[i][0]=2*t[i-1][0]; 
    }
            
    else
    {
         t[i][0]=t[i-1][0];
    }
    
          for(int i=1;i<=n;i++){
              for(int j=1;j<=s;j++){
                  if(arr[i-1]<=j){
                      t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];     //condn where we add included and excluded subset
                  }
                  else
                      t[i][j]=t[i-1][j];
              }
          }
          return t[n][s];
}
int findTargetSumWays(vector<int>& nums, long S) {
    int n=nums.size();
    long sumofarray=0;
    long s1;
 for(int i=0;i<nums.size();i++){
     sumofarray+=nums[i];
 }
    
    s1=(S+sumofarray)/2;         //given sum + sum of array /2 is the number we need to find subset of sum i.e function written above
    
    if((S+sumofarray)%2!=0 || sumofarray<S){         //if its odd and less than given difference print 0 
        return 0;
    }
    return countsub(nums,n,s1);
}
};
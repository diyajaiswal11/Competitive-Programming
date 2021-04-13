class Solution {
public:
    static bool sortcol(const vector<int>& a1,
               const vector<int>& a2) 
    {
        return a1[1]>a2[1];
    }
    int maximumUnits(vector<vector<int>>& a, int s) {
        
        sort(a.begin(),a.end(),sortcol);
        int ans=0,i=0,p=0,n=a.size();
        while(p<s&&i<n)
        {
            if(p+a[i][0]<=s&&i<n)
            {
                ans+=(a[i][0]*a[i][1]);
                p=p+a[i][0];
                i+=1;
            }
            else
                break;
        }
        if(p<s&&i<n)
        {
            ans+=((s-p)*a[i][1]);
        }
        return ans;
        
    }
};
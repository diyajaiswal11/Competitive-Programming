class Solution {
public:
    vector<int> minSubsequence(vector<int>& a) {
        
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int n=a.size(),s=0,s1=0;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s1<=s)
            {
                b.push_back(a[i]);
                s1+=a[i];
                s-=a[i];
            }
            else
                break;
        }
        return b;
    }
};
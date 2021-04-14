class Solution {
public:
    vector<int> minOperations(string a) {
        
        int n=a.length();
        vector<int>ans,b(n,0);
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
                ans.push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<ans.size();j++)
            {
                sum+=abs(ans[j]-i);
            }
            b[i]=sum;
        }
        return b;
    }
};
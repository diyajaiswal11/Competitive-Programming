class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& r) {
        
        vector<int>s;
        int n=r.size();
        for(int i=0;i<n;i++)
        {
            if(r[i][0]<r[i][1])
                s.push_back(r[i][0]);
            else
                s.push_back(r[i][1]);
        }
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        int p=s[0],ans=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==p)
                ans+=1;
        }
        return ans;
       
    }
};
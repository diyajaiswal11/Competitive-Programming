class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
        
        map<int,vector<int>>m;
        vector<vector<int>>ans;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            m[a[i]].push_back(i);
        }
        for(auto i:m)
        {
            vector<int>b;
            int k=0;
            for(int j=0;j<i.second.size();j++)
            {
                if(k==i.first)
                {
                    ans.push_back(b);
                    b.clear();
                    k=0;
                }
                b.push_back(i.second[j]);
                k+=1;
            }
            if(k!=0)
                ans.push_back(b);
        }
        return ans;
    }
};
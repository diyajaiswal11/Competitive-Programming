class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& a, int k) {
        
        priority_queue<pair<int,vector<int>>>pq;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            pq.push({a[i][0]*a[i][0]+a[i][1]*a[i][1],a[i]});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>>ans;
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
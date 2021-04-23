class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n=a.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]+=1;
        }
        for(auto i:m)
        {
            pq.push({i.second,i.first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
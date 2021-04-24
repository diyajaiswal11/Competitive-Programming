class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& a) {
        
        priority_queue<pair<int,int>>pq;
        int n=a.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]+=1;
        }
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        vector<int>ans;
        while(pq.size()>1)
        {
            pair<int,int> x=pq.top();
            pq.pop();
            pair<int,int> y=pq.top();
            pq.pop();
            ans.push_back(x.second);
            ans.push_back(y.second);
            x.first-=1;
            y.first-=1;
            if(x.first>0)
                pq.push(x);
            if(y.first>0)
                pq.push(y);
        }
        if(pq.size()==1)
            if(pq.top().first==1)
                ans.push_back(pq.top().second);
        return ans;
    }
};
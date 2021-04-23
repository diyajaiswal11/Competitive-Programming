class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int>m;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            m[s[i]]+=1;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:m)
        {
            pq.push({i.second,i.first});
        }
        string ans="";
        while(pq.size()>0)
        {
            //cout<<pq.top().first<<" "<<pq.top().second<<endl;
            for(int i=0;i<pq.top().first;i++)
                ans+=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
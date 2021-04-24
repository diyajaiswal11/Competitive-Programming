class Solution {
public:
    string reorganizeString(string s) {
        
        int n=s.length();
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]+=1;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp)
        {
            //cout<<i.first<<" "<<i.second<<endl;
            pq.push({i.second,i.first});
        }
        string ans="";
        while(pq.size()>1)
        {
            pair<int,char>x=pq.top();
            pq.pop();
            pair<int,char>y=pq.top();
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
        {
            if(pq.top().first==1)
                ans.push_back(pq.top().second);
        }
        //cout<<ans;
        if(ans.length()==n)
            return ans;
        else
            return "";
    }
};
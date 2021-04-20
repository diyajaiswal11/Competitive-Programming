class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        
        vector<int>v;
        stack<pair<int,int>>s;
        for(int i=a.size()-1;i>=0;i--)
        {
            if(s.size()==0)
                v.push_back(-1);
            else if(s.size()>0&&s.top().first>a[i])
                v.push_back(s.top().second);
            else if(s.size()>0&&s.top().first<=a[i])
            {
                while(s.size()>0&&s.top().first<=a[i])
                    s.pop();
                if(s.size()==0)
                    v.push_back(-1);
                else
                    v.push_back(s.top().second);
            }    
            s.push({a[i],i});
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==-1)
                v[i]=0;
            else
                v[i]=v[i]-i;
        } 
        return v;
    }
    
};
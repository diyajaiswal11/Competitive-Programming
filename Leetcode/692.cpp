class Solution {
struct comp { 
        bool operator ()(std::pair<int, string>& A, std::pair<int, string>& B) {
            if (A.first != B.first)
                return (A.first > B.first); 
            
            return (A.second.compare(B.second) < 0);
        }
    } ;
public:
    vector<string> topKFrequent(vector<string>& a, int k) {
        
        unordered_map<string,int>m;
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp>mh;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]+=1;
        }
        for(auto i:m)
        {
            mh.push({i.second,i.first});
            if(mh.size()>k)
                mh.pop();
        }
        vector<string>s;
        while(mh.size()>0)
        {
            s.push_back(mh.top().second);
            mh.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
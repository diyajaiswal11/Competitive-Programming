class Solution {
public:
    vector<vector<int>>ans;
    map<vector<int>,int>m;
    vector<vector<int>> subsetsWithDup(vector<int>& ip) {
        
        sort(ip.begin(),ip.end());
        vector<int>op;
        solve(ip,op);
        return ans;
        
    }
    void solve(vector<int>ip,vector<int>op)
    {
        if(ip.size()==0)
        {
            if(m.find(op)!=m.end())
            {
                return;
            }
            else
            {
                ans.push_back(op);
                m.insert({op,1});
                return;
            }
        }
        vector<int>op1;
        for(int i=0;i<op.size();i++)
            op1.push_back(op[i]);
        vector<int>op2;
        for(int i=0;i<op.size();i++)
            op2.push_back(op[i]);
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
    }
};
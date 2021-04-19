class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> subsets(vector<int>& ip) {
        
        vector<int>op;
        solve(ip,op);
        return ans;
        
    }
    void solve(vector<int>ip,vector<int>op)
    {
        if(ip.size()==0)
        {
            ans.push_back(op);
            return;
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
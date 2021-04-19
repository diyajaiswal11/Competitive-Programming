class Solution {
public:
    vector<string>ans;
    vector<string> letterCasePermutation(string s) {
        
        string ip=s,op="";
        lcp(ip,op);
        return ans;
    }
    void lcp(string ip,string op)
    {
        if(ip.length()==0)
        {
            ans.push_back(op);
            return;
        }
        if(ip[0]>=48&&ip[0]<=57)
        {
            string op1=op;
            op1.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            lcp(ip,op1);
        }
        else if(ip[0]>=97&&ip[0]<=122)
        {
            string op1=op,op2=op;
            op1.push_back(ip[0]);
            op2.push_back(ip[0]-32);
            ip.erase(ip.begin()+0);
            lcp(ip,op1);
            lcp(ip,op2);
        }
        else if(ip[0]>=65&&ip[0]<=90)
        {
            string op1=op,op2=op;
            op1.push_back(ip[0]);
            op2.push_back(ip[0]+32);
            ip.erase(ip.begin()+0);
            lcp(ip,op1);
            lcp(ip,op2);
        }
    }
};
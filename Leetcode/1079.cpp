class Solution {
public:
    vector<string>ans;
    map<string,int>m;
    int numTilePossibilities(string ip) {
        
        string op="";
        sort(ip.begin(),ip.end());
        subset(ip,op);
        int x=0;
        for(int i=0;i<ans.size();i++)
        {
            string p=ans[i];
            int s=fac(ans[i].length());
            map<int,int>mp;
            for(int j=0;j<p.length();j++)
            {
                mp[int(p[j])]+=1;
            }
            for(auto k : mp)
            {
                s=s/fac(k.second);
            }
            x+=s;
        }
        return x-1;
        
    }
    void subset(string ip,string op)
    {
        if(ip.length()==0)
        {
            if(m.find(op)!=m.end())
                return;
            else
            {
                m.insert({op,1});
                ans.push_back(op);
                return;
            }    
        }
        string op1=op;
        string op2=op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        subset(ip,op1);
        subset(ip,op2);
    }
    int fac(int n)
    {
        int n1=1;
        for(int i=1;i<=n;i++)
            n1*=i;
        return n1;
    }
};
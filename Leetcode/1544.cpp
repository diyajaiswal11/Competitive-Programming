class Solution {
public:
    string makeGood(string a) {
        
        stack<char>s;
        for(int i=0;i<a.length();i++)
        {
            int f=0;
            if(s.size()>0)
            {
                if(abs(int(s.top())-int(a[i]))==32)
                {
                    s.pop();
                    f=1;
                }
            }
            if(f==0)
                s.push(a[i]);
        }
        string ans="";
        while(s.size()>0)
        {
            cout<<s.top()<<" ";
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
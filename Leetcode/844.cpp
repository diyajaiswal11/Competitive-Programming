class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>a;
        stack<char>b;
        int m=s.length(),n=t.length();
        for(int i=0;i<m;i++)
        {
            if(s[i]=='#'&&a.size()>0)
            {
                a.pop();
            }
            else if(s[i]!='#')
                a.push(s[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(t[i]=='#'&&b.size()>0)
            {
                b.pop();
            }
            else if(t[i]!='#')
                b.push(t[i]);
        }
        while(a.size()>0&&b.size()>0)
        {
            if(a.top()==b.top())
            {
                a.pop();
                b.pop();
            }
            else
                return false;
        }
        if(a.size()==0&&b.size()==0)
            return true;
        else
            return false;
    }
};
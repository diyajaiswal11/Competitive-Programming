class Solution {
public:
    int minInsertions(string a) {
        
        stack<char>s;
        a.push_back('.');
        int n=a.length(),ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='(')
                s.push(a[i]);
            else if(a[i]==')'&&a[i+1]==')')
            {
                if(s.empty())
                    ans+=1;
                else
                    s.pop();
                i+=1;
            }
            else if(a[i]==')')
            {
                if(s.empty())
                    ans+=2;
                else
                {
                    ans+=1;
                    s.pop();
                }
                    
            }
        }
        if(!s.empty())
            ans+=s.size()*2;
        return ans;
    }
};
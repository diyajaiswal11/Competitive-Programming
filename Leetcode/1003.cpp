class Solution {
public:
    bool isValid(string a) {
        
        stack<char>s;
        bool ans=true;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]=='a'||a[i]=='b')
                s.push(a[i]);
            else
            {
                if(s.size()>0)
                {
                    if(s.top()=='b')
                        s.pop();
                    else
                        ans=false;
                }
                else
                    ans=false;
                
                if(s.size()>0)
                {
                    if(s.top()=='a')
                        s.pop();
                    else
                        ans=false;
                }
                else
                    ans=false;
                
            }
        }
        return ans&&s.empty();
        
        
    }
};
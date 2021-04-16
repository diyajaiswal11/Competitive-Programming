class Solution {
public:
    int minAddToMakeValid(string s) {
        
        stack<char>s1;
        stack<char>s2;
        int n=s.length(),ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                s1.push(s[i]);
            else if(s[i]==')')
                s2.push(s[i]);
            
            while(s2.size()>s1.size())
            {
                s2.pop();
                ans+=1;
            }
            while(s2.size()>0&&s1.size()>0)
            {
                s2.pop();
                s1.pop();
            }
        }
        ans+=s1.size();
        return ans;
    }
};
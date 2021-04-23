class Solution {
public:
    string minRemoveToMakeValid(string a) {
        
        stack<char>s1;
        stack<char>s2;
        int n=a.length();
        int i=0;
        while(i<a.length())
        {
            int f=0;
            if(a[i]=='(')
                s1.push('(');
            else if(a[i]==')')
            {
                if(s1.size()>0)
                    s1.pop();
                else
                {
                    a.erase(a.begin()+i);
                    f=1;
                }    
            }
            if(f==0)
                i+=1;
        }
        int j=a.length()-1;
        while(s1.size()>0)
        {
            if(a[j]=='(')
            {
                a.erase(a.begin()+j);
                s1.pop();
            }
            else
                j-=1;
        }
        return a;
    }
};
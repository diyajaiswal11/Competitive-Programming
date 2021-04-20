class Solution {
public:
    bool validateStackSequences(vector<int>& a, vector<int>& b) {
        
        stack<int>s;
        int n=a.size(),j=0;
        for(int i=0;i<n;i++)
        {
            s.push(a[i]);
            while(s.size()>0&&j<n)
            {
                if(s.top()==b[j])
                {
                    s.pop();
                    j+=1;
                }
                else
                    break;
            }
        }  
       
        if(s.size()==0)
            return true;
        else
            return false;
    }
};
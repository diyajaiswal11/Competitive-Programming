class Solution {
public:
    int calPoints(vector<string>& a) {
        
        stack<int>s;
        int n=a.size();
        for(int i=0;i<n;i++)
        { 
            if(a[i]=="+")
            {
                int prev=s.top();
                s.pop();
                int pprev=s.top();
                s.push(prev);
                s.push(prev+pprev);
            }
            else if(a[i]=="D")
            {
                int prev=s.top();
                s.push(2*prev);
            }
            else if(a[i]=="C")
            {
                s.pop();
            }
            else
            {
                s.push(stoi(a[i]));
            }
        }
        int ans=0;
        while(s.size()>0)
        {
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};
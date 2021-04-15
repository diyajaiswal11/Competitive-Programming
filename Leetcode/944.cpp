class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        
        int n=s.size(),ans=0;
        for(int i=0;i<s[0].length();i++)
        {
            string p="";
            for(int j=0;j<n;j++)
            {
                p+=s[j][i];
            }
            string q=p;
            sort(p.begin(),p.end());
            if(p!=q)
                ans+=1;
        }
        return ans;
    }
};
class Solution {
public:
    vector<string> buildArray(vector<int>& a, int k) {
        
        int j=0,n=a.size();
        vector<string>s;
        map<int,int>m;
        for(int i=0;i<n;i++)
            m[a[i]]+=1;
        for(int i=1;i<=k;i++)
        {
            if(m[i]>0)
            {
                s.push_back("Push");
            }
            else
            {
                if(i<=a[n-1])
                {s.push_back("Push");
                s.push_back("Pop");}
            }
        }
        return s;
    }
};
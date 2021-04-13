class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        
        int n=a.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]+=1;
        }
        int j=1;
        while(true)
        {
            if(m[j]==0)
                return j;
            else
                j+=1;
        }
        
    }
};
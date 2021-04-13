class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[abs(a[i])-1]>0)
                a[abs(a[i])-1]*=(-1);
        }
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
                b.push_back(i+1);
        }
        return b;
    }
};
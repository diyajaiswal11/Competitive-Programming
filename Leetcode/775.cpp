class Solution {
public:
    bool isIdealPermutation(vector<int>& a) {
        
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(abs(a[i]-i)>1)
                return false;
        }
        return true;
    }
};
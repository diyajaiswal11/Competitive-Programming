class Solution {
public:
    bool canReach(vector<int>& a, int i) {
        
        if(i<0||i>=a.size())
            return false;
        if(a[i]==-1)
            return false;
        if(a[i]==0)
            return true;
        int p=a[i];
        a[i]=-1;
        return canReach(a,i+p)||canReach(a,i-p);
    }
};
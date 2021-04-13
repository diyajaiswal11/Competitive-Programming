//https://leetcode.com/problems/find-the-duplicate-number/


class Solution {
public:
    int findDuplicate(vector<int>& a) {
        
        int n=a.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]+=1;
        } 
        for(auto i:m)
        {
            //cout<<i.first<<" "<<i.second<<endl;
            if(i.second>1)
                return i.first;
        }
        return -1;
    }
};
class Solution {
public:
    int kthSmallest(vector<vector<int>>& a, int k) {
        
        priority_queue<int>pq;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                pq.push(a[i][j]);
                if(pq.size()>k)
                    pq.pop();
            }
        }
        return pq.top();
    }
};
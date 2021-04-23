class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
    }
};
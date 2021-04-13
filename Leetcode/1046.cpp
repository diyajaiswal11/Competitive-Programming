class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        
        int n=a.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]);
        }
        while(pq.size()>1)
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x!=y)
            {
                pq.push(x-y);
            }
        }
        if(pq.size()==1)
            return pq.top();
        else
            return 0;
    }
};
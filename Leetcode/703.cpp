class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int> > pq;
    int k=0;
    KthLargest(int k, vector<int>& a) {
        
        this->k=k;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            pq.push(a[i]);
            if(pq.size()>k)
                pq.pop();
        }
        
    }
    
    int add(int val) {
        
        pq.push(val);
        if(pq.size()>k)
            pq.pop();
        return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
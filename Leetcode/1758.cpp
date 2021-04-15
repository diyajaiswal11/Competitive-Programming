class Solution {
public:
    int minOperations(string s) {
        
        int n=s.size(),a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0&&s[i]=='1')
                a+=1;
            if(i&2!=0&&s[i]=='0')
                a+=1;
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0&&s[i]=='0')
                b+=1;
            if(i&2!=0&&s[i]=='1')
                b+=1;
        }
        if(a<b)
            return a;
        else
            return b;
    }
};
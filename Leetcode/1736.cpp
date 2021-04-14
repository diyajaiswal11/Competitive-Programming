class Solution {
public:
    string maximumTime(string t) {
        
        char h1=t[0],h2=t[1],m1=t[3],m2=t[4];
        if(h1=='?'&&h2=='?')
        {
            h1='2';
            h2='3';
        }
        else if(h1=='?')
        {
            if(h2=='0'||h2=='1'||h2=='2'||h2=='3')
                h1='2';
            else
                h1='1';
        }
        else if(h2=='?')
        {
            if(h1=='2')
                h2='3';
            else
                h2='9';
        }
       
        if(m1=='?')
        {
            m1='5';
        }
        if(m2=='?')
        {
            m2='9';
        }
        string ans="";
        ans.push_back(h1);
        ans.push_back(h2);
        ans.push_back(':');
        ans.push_back(m1);
        ans.push_back(m2);
        return ans;
        
    }
};
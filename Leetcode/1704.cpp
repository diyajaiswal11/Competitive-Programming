class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n=s.length();
        string a=s.substr(0,n/2);
        string b=s.substr(n/2,n/2);
        int p=0,q=0;
        for(int i=0;i<a.length();i++)
        {          
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||                                      a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
                p+=1;
        }
        for(int i=0;i<b.length();i++)
        {          
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||                                      b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
                q+=1;
        }
        if(p==q)
            return true;
        else
            return false;
    }
};
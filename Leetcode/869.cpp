#include <bits/stdc++.h> 
using namespace std;
#include <string>
#include<vector>

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        vector<string>a ={"1","2","4","8","16","32","64","128","256","512","1024","2048","4096","8192","16384","32768","65536","131072","262144","524288","1048576","2097152","4194304","8388608","16777216","33554432","67108864","134217728","268435456","536870912","1073741824"}; 
        string s=to_string(n);
        sort(s.begin(),s.end());
        for(int i=0;i<a.size();i++)
        {
            sort(a[i].begin(),a[i].end());
            if(s==a[i])
                return true;
        }
        return false;
        
        
    }
};
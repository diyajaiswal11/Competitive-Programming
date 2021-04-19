//https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <string>
class Solution {
public:
    vector<string>ans;
    vector<string>l={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string d) {
        
        string ip=d;
        string op="";
        func(ip,op);
        return ans;
        
    }
    void func(string ip,string op)
    {
        if(ip.length()==0)
        {
            if(op.length())
            ans.push_back(op);
            return;
        }
        string s=l[int(ip[0])-50];
        ip.erase(ip.begin()+0);
        for(int i=0;i<s.length();i++)
        {
            string op1=op;
            op1.push_back(s[i]);
            func(ip,op1);
        }
        return;
    }
};
//https://leetcode.com/problems/unique-morse-code-words/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& w) {
        
        string arr[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    vector<string> v(arr, arr + n);
    unordered_set<string>st;
        int j=0;
    for(int i=0;i<w.size();i++)
    {
        string s=w[i],trans="";
        for(j=0;j<s.length();j++)
        {
            trans+=v[int(s[j]-97)];
            
        }
        st.insert(trans);
    }
        return st.size();
    }
};
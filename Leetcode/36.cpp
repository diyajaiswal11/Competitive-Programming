//https://leetcode.com/problems/valid-sudoku/


#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream> 
#include <sstream>  
#include <string>  
using namespace std; 
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        
        for(int i=0;i<9;i++)
        {
            set<char>s;
            for(int j=0;j<9;j++)
            {
                if(a[i][j]=='.')
                    continue;
                if(s.find(a[i][j])!=s.end())
                    return false;
                s.insert(a[i][j]);
            }
        }
        for(int i=0;i<9;i++)
        {
            set<char>s;
            for(int j=0;j<9;j++)
            {
                if(a[j][i]=='.')
                    continue;
                if(s.find(a[j][i])!=s.end())
                    return false;
                s.insert(a[j][i]);
            }
        }
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                set<int>s;
                for(int x=i;x<i+3;x++)
                {
                    for(int y=j;y<j+3;y++)
                    {
                        if(a[x][y]=='.')
                            continue;
                        if(s.find(a[x][y])!=s.end())
                            return false;
                        s.insert(a[x][y]);
                    }
                }
            }
        }
        return true;
        
    }
};
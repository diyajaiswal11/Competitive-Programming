//https://leetcode.com/problems/queries-on-a-permutation-with-key/


#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
        
       vector<int> p;
        for(int i = 0;i < m;i++){
            p.push_back(i+1);
        }
        vector<int> ans;
        for(int i = 0;i < q.size();i++){
            for(int j = 0;j < p.size();j++){
                if(q[i] == p[j]){
                    ans.push_back(j);
                    p.insert(p.begin(),p[j]);
                    p.erase(p.begin() + j + 1);
                }
            }
        }
        return ans;
    }
};
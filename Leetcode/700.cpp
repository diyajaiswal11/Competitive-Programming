//https://leetcode.com/problems/search-in-a-binary-search-tree/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int x) {
        
        TreeNode* p=root;
        if(!p)
            return NULL;
      
        while(p!=NULL)
        {
            if(p->val==x)
            return p;
            if(p->val<x)
                p=p->right;
            else
                p=p->left;
        }
        return NULL;
    }
};
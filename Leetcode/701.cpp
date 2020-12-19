//https://leetcode.com/problems/insert-into-a-binary-search-tree/


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
    TreeNode* insertIntoBST(TreeNode* root, int x) {
        
        TreeNode* p=root;
        if(!p)
            return new TreeNode(x);
        else if(x<p->val)
            p->left=insertIntoBST(p->left,x);
        else
            p->right=insertIntoBST(p->right,x);
        return root;
    }
};
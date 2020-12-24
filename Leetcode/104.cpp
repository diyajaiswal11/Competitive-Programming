//https://leetcode.com/problems/maximum-depth-of-binary-tree/

#include <bits/stdc++.h> 
using namespace std;

  //Definition for a binary tree node.
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(!root)
            return 0;
        int leftr=maxDepth(root->left);
        int rightr=maxDepth(root->right);
        return max(leftr,rightr)+1;
    }
};
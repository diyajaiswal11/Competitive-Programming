//https://leetcode.com/problems/range-sum-of-bst/

#include <bits/stdc++.h> 
using namespace std;
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
    void Traverse(TreeNode* root, int low, int high,int *i)
    {
        if(root==NULL)
            return;
        Traverse(root->left,low,high,i);
        if(root->val>=low&&root->val<=high)
            *i+=root->val;
        Traverse(root->right,low,high,i);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
       
        int i=0;
        Traverse(root,low,high,&i);
        return i;
    }
};
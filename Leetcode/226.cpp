// https://leetcode.com/problems/invert-binary-tree/



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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *i= root;
        TreeNode *temp=NULL;
        while(i!=NULL)
        {
            temp=i->left;
            i->left=i->right;
            i->right=temp;
            TreeNode *l=invertTree(i->left);
            TreeNode *r=invertTree(i->right);
            if(i==root)
                break;
        }
        return root;
    
        
    }
};
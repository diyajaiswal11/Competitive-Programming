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
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(!root)
            return {};
        stack<TreeNode* >s;
        vector<int>ans;
        s.push(root);
        while(s.empty()==false)
        {
            TreeNode* p=s.top();
            s.pop();
            ans.push_back(p->val);
            if(p->left)
                s.push(p->left);
            if(p->right)
                s.push(p->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        helper(root, res);
        return res;
    }
    void helper(TreeNode* root, vector<int>& vec) {
        if(!root) return;
        helper(root->left,vec);
        vec.push_back(root->val);
        helper(root->right,vec);
    }
};
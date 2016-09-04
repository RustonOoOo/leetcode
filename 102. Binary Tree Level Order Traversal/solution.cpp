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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> table;
        if(!root) return table;
        levelOrder(root, table,1);
        return table;
    }
    void levelOrder(TreeNode* root, vector<vector<int>>&v, int level) {
        if(!root) return;
        if(level > v.size()) {
            v.push_back(vector<int>());
        }
        v[level-1].push_back(root->val);
        levelOrder(root->left, v, level + 1);
        levelOrder(root->right, v, level + 1);
    }
};
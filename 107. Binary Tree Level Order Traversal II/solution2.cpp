/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #include <queue>
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(!root) return result;
        levelOrderBottom(root, result, 1);
        return vector<vector<int>>(result.rbegin(), result.rend());
    }
    void levelOrderBottom(TreeNode* root,vector<vector<int>>& v, size_t level) {
        if(!root) return;
        if(level > v.size()) {
            v.push_back(vector<int>());
        }
        v[level-1].push_back(root->val);
        levelOrderBottom(root->left, v, level+1);
        levelOrderBottom(root->right, v, level+1);
    }
};
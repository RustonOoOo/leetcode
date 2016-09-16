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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        rightSideView(root, result, 0);
        return result;
    }
    
    void rightSideView(TreeNode* root, vector<int>& v, int level) {
        if(!root) return;
        if(v.size() == level)
            v.push_back(root->val);
        rightSideView(root->right, v, level+1);
        rightSideView(root->left, v, level+1);
    }
};
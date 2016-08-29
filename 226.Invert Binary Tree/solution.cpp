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
    TreeNode* invertTree(TreeNode* root) {
        if (root) {
            std::swap(root->left, root->right);//include null swap
            if(root->left)
                invertTree(root->left);
            if(root->right)
                invertTree(root->right);
        }
        return root;
    }
};
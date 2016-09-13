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
        stack<TreeNode*> s;
        pushAll(root, s);
        while(!s.empty()) {
            TreeNode* node = s.top();s.pop();
            res.push_back(node->val);
            pushAll(node->right,s);
        }
        return res;
    }
    void pushAll(TreeNode* root, stack<TreeNode*>& s) {
        while(root) {
            s.push(root);
            root = root->left;
        }
    }
};
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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s;
        pushAll(root, s);
        
        while(!s.empty()) {
            TreeNode* node = s.top();s.pop();
            if(--k == 0)return node->val;
            pushAll(node->right,s);
        }
        return NULL;
    }
    void pushAll(TreeNode* root,stack<TreeNode*>& s) {
        while(root) {
            s.push(root);
            root = root->left;
        }
    }
};
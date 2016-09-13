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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        stack<TreeNode*> s;
        pushAll(root, s, vec);
        while(!s.empty()) {
            TreeNode* node = s.top();s.pop();
            //vec.push_back(node->val);
            pushAll(node,s,vec);
        }
        return vec;
    }
    void pushAll(TreeNode* root, stack<TreeNode*>& s, vector<int>& v) {
        while(root) {
            v.push_back(root->val);
            if(root->right)s.push(root->right);
            root = root->left;
        }   
    }
};
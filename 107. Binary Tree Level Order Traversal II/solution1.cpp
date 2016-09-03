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
        if(!root) return vector<vector<int>>();
        vector<vector<int>> table;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            size_t sz = q.size();
            vector<int> level;
            for(int i = 0; i < sz; i++) {
                auto node = q.front();q.pop();
                level.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            table.push_back(std::move(level));
        }
        
        return vector<vector<int>>(table.crbegin(), table.crend());
    }
};
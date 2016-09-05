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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(!root) return result;
        binaryTreePaths(root, result, string());
        return result;
    }
    void binaryTreePaths(TreeNode* root, vector<string>&v,string s) {
        if(!root) return;
        s.append(to_string(root->val));
        s.push_back('-');
        s.push_back('>');
        if(!root->left && !root->right){
            s.pop_back();
            s.pop_back();
            v.push_back(std::move(s));
        }
            
        binaryTreePaths(root->left, v, s);
        binaryTreePaths(root->right, v, s);
    }
};
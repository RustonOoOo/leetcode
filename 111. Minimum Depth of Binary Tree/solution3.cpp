

#include <climits>
#include <algorithm>

// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;

//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };


class Solution {
public:
    static int minDepth(TreeNode *root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int depth = 0;
        while(!q.empty()) {
            int sz = q.size();
            depth++;
            for(int i = 0; i < sz; i++) {
                TreeNode* node = q.front();q.pop();
                if(node && !node->left && !node->right){
                    return depth;
                };
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
        }
        return depth;
    }
};


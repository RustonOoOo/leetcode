

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
        if(root && !root->right) return 1+minDepth(root->left);
        else if(root && !root->left) return 1+minDepth(root->right);
        return 1+ min(minDepth(root->left), minDepth(root->right));
    }
};


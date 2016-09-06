

#include <climits>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
    static int minDepth(TreeNode *root) {
        TreeNode node(0);
        node.left = root;
        int x = helper(&node);
        return x;
    }

    static int helper(TreeNode *root) {
        if (root && !root->left && !root->right)return 1;
        if (!root) return INT_MAX;
        return 1 + std::min(helper(root->left), helper(root->right));
    }
};


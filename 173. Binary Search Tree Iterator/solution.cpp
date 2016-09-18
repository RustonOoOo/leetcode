
//[https://leetcode.com/problems/binary-search-tree-iterator/]

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //inorder tranverse
class BSTIterator {
    TreeNode* root;
    TreeNode* cur;
    stack<TreeNode*> s;
    void pushLeft(stack<TreeNode*>&s, TreeNode* root) {
        while(root) {
            s.push(root);
            root = root->left;
        }
    }
public:
    BSTIterator(TreeNode *r):root(r),cur(r){
        pushLeft(s,root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return cur != NULL;
    }

    /** @return the next smallest number */
    int next() {
        cur = s.top();
        s.pop();
        int val = cur->val;
        pushLeft(s, cur->right);
        if(s.empty()){cur = NULL;}
        return val;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
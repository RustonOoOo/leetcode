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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* sp = root;
        TreeNode* sq = root;
        TreeNode* lca = root;
        while(sq != q && sp != p) {
            if(sq == sp)
                lca = sq;
            if(sp->val > p->val)
                sp = sp->left;   
            else
                sp = sp->right;
            if(sq->val > q->val)
                sq = sq->left;
            else
                sq = sq->right;
        }
        TreeNode* ssp = sp;
        while(sp != q && sp)
            if(sp->val > q->val)
                sp = sp->left;
            else
                sp = sp->right;
        if(sp == q)return ssp;
        TreeNode* ssq = sq;
        while(sq != p && sq)
            if(sq->val > p->val)
                sq = sq->left;
            else
                sq = sq->right;
        if(sq == p)return ssq;
        return lca;
    }
};
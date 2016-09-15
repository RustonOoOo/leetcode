/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*
��̬�滮�������
 */
class Solution {
public:
    int rob(TreeNode* root) {
        unordered_map<TreeNode*,int> map;//��¼�ýڵ������ӽṹ��ֵ
        rob(root, map);
        return map[root];
    }
    int rob(TreeNode* root, unordered_map<TreeNode*, int>& map) {
        if(!root)return 0;
        if(map.find(root) != map.end())return map[root];
        int val = 0;
        //������ڵ��ֵ
        if(root->left)
            {val += rob(root->left->left,map) + rob(root->left->right,map);}
        if(root->right)
            {val += rob(root->right->left,map) + rob(root->right->right,map);}
        val = max(val + root->val, rob(root->left,map)+rob(root->right,map));//�Ƚ��������ָ���
        map[root] = val;
        return val;
    }
};
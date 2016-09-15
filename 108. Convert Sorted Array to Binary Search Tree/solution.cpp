
  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode(int x)  val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public
    TreeNode sortedArrayToBST(vectorint& nums) {
        if(nums.size() == 0)return NULL;
        return sortedArrayToBST(nums, 0, nums.size()-1);
    }
    TreeNode sortedArrayToBST(vectorint& nums, int start, int end) {
        if(start  end) return NULL;
        int mid = start + (end-start)2;
        TreeNode root = new TreeNode(nums[mid]);
        root-left = sortedArrayToBST(nums,start, mid - 1);
        root-right = sortedArrayToBST(nums, mid+1, end);;
        return root;
    }
};
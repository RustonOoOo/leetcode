//https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q(nums.begin(), nums.end());
        int element;
        for(int i = 0; i < k; i++) {
            element = q.top();
            q.pop();
        }
        return element;
    }
};

//https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution {
public:
    int partition(vector<int>&nums,int start, int end) {
        if(start == end)return start;
        int  pivot = nums[start];
        int l = start+1,r = end;
        while (l <= r) {
            if (nums[l] < pivot && nums[r] > pivot)
                swap(nums[l++], nums[r--]);
            if (nums[l] >= pivot) l++; 
            if (nums[r] <= pivot) r--;
        }
        swap(nums[start], nums[r]);
        return r;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        int lo = 0, hi = nums.size()-1;
        while(true) {
            int p = partition(nums, lo, hi);
            if(p == k - 1)return nums[p];
            else if(p > k-1)hi = p - 1;
            else lo = p + 1;
        }
        return INT_MIN;
    }
};
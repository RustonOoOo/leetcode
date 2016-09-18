
//https://leetcode.com/problems/increasing-triplet-subsequence/
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        return LIS(nums) >= 3;
    }
    int LIS(vector<int>& nums) {
        vector<int> v;
        v.push_back(INT_MIN); 
        for(int num : nums) {
            if(num > v[v.size()-1])
                v.push_back(num);
            else {
                int index = searchInsert(v, num);
                v[index] = num;
            }
        }
        return v.size() - 1;
    }
    int searchInsert(vector<int>& nums, int target) {
        int low = 0,hi = nums.size();
        while(low < hi) {
            int mid = low + (hi-low)/2;
            if(nums[mid] >= target) 
                hi = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
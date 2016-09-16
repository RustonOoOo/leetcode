35. Search Insert Positionclass Solution {
public:
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
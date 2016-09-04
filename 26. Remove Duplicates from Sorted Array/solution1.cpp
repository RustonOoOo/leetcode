class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz = nums.size();
        int index = 1;
        for(int i = 0, j = 0; j < sz;) {
            while(nums[i] == nums[j]) {
                j++;
            }
            nums[index++] = nums[j];
            i = j;
        }
        return --index;
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for(int i : nums) {
            if(index == 0 || i > nums[index - 1])
                nums[index++] = i;
        }
        return index;
    }
};
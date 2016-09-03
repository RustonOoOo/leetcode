class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)return 0;
        size_t sz = nums.size();
        int j = nums.size()-1;
        for(int i = 0; i < j;) {//put all elements equal to val in the back
            while(i < sz && nums[i] != val)i++;
            while(j > 0 && nums[j] == val)j--;
            if(i >= j)break;
            std::swap(nums[i],nums[j]);
        }
        while(j < sz && nums[j] != val)j++;//find the first element of val (O(n))
        nums.erase(nums.begin()+j, nums.end());//erase them in the back
        return nums.size();
    }
};

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int sz = nums.size();
        for(int i = 0; i < sz; i++) {
            if(map.find(nums[i]) != map.end() && i - map[nums[i]] <= k)
                return true;
            map[nums[i]] = i;
        }
        return false;
    }
};
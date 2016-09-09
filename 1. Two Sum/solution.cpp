class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, size_t> map;
        size_t sz = nums.size();
        for(int i = 0; i < sz; i++) {
            int diff = target - nums[i];
            if(map.find(diff) != map.end())
                res.push_back(map[diff]),res.push_back(i); 
            else
                map[nums[i]] = i;
        }
        return res;
    }
};
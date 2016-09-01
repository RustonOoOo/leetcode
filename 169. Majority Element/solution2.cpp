#include <unordered_set>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        for(auto i : nums) {
            counter[i]++;
        }
        int sz = nums.size();
        int max_count = 0;
        int find = 0;
        for(int i = 0; i < sz; i++) {
            if(counter[nums[i]] > max_count) {
                max_count = counter[nums[i]];
                find = nums[i];
            }
            if(max_count > nums.size() / 2) return find;
            
        }
        return find;
    }
};
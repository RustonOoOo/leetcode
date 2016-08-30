#include <algorithm>
#include <unordered_set>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        unordered_set<int> set;
        for(auto i : nums1) {
            if(std::binary_search(nums2.begin(), nums2.end(), i)) set.insert(i);
        }
        return vector<int>(set.begin(), set.end());
    }
};
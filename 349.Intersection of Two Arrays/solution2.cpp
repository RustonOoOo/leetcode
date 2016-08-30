#include <algorithm>
#include <set>
#include <unordered_set>
class Solution {
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> ret;
        auto finish = set2.end();
        for(auto i : set1) {
            if(set2.find(i) != finish) ret.push_back(i);
        }
        return ret;
    }
};
#include <algorithm>
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> counter1;
        vector<int> result;
        for(int num : nums1)
            counter1[num]++;
        for(int num : nums2) {
            if(counter1.find(num) != counter1.end() && counter1[num] > 0) {
                result.push_back(num);
                counter1[num]--;
            }
        }
        return result;
    }
};
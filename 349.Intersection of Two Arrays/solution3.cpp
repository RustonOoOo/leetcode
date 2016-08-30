

class Solution {
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        vector<int> ret;
        for(int i = 0, j = 0; i < nums1.size() && j < nums2.size(); ) {
            if(nums1[i] < nums2[j]) {
                i++;
            }
            else if(nums1[i] == nums2[j])  {
                int element = nums1[i];
                ret.push_back(nums1[i]);
                while(nums1[i] == element) i++;
                while(nums2[j] == element) j++;
            }
            else j++;
        }
        return ret;
    }
};
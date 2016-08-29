/*
faster
*/
#include <unordered_set>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> set;
        for(auto i : nums) {
            if(!set.insert(i).second) set.erase(i);
        }
        return *set.begin();
    }
};
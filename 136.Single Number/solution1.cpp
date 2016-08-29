
#include <pair>
#include <unordered_map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, bool> map;
        for(auto i : nums) {
            bool success = map.insert(std::make_pair(i, false)).second;
            if(!success) {
                map[i] = true;
            }
        }
        auto it = std::find_if(map.begin(), map.end(), [](const pair<int, bool>& p){return !p.second;});
        return it->first;
    }
};
class Solution {
    vector<int> vec;
public:
    Solution(vector<int> nums):vec(nums) {
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return vec;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> result(vec);
        int sz = vec.size();
        for(int i = 1; i < sz;i++) {
            int r = rand() % (i+1);
            std::swap(result[i], result[r]);
        }
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
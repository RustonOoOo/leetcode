class Solution {
public:
	//using stl fill and remove
    void moveZeroes(vector<int>& nums) {
        std::fill(std::remove(nums.begin(), nums.end(), 0)/*O(n)*/, nums.end(), 0);
    }

    void moveZeroes(vector<int>& nums) {
        int j = 0;
        auto start = std::find_if(nums.begin(), nums.end(), [](int val){return val != 0;});
        auto finish = nums.end();
        while(start != finish) {
            nums[j++] = *start;
            start = std::find_if(++start, nums.end(), [](int val){return val != 0;});
        }
        for(; j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};
    }
};
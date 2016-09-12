class Solution {
public:
    int binary_search(vector<int>& nums,int low,int hi, int target) {
        //int low = 0, hi = nums.size()-1;
        hi = hi-1;
        while(low <= hi) {
            int mid = low + (hi - low)/2;
            if(nums[mid] == target)return mid;
            else if(nums[mid] > target)hi = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sz = numbers.size();
        for(int i = 0; i < sz; i++) {
            int diff = target - numbers[i];
            int position = binary_search(numbers,i+1,sz,diff);
            if(position != -1) {
                return vector<int>{i+1, position+1};
            }
        }
        return vector<int>();
    }
};
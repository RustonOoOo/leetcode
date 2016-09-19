//https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
         if(nums.size()==0)return;
         int i = 0, j = nums.size()-1;
         while(i < j){
             while(i < j && nums[i] == 0)i++;
             while(j >= 0 && nums[j] !=0 )j--;
             swap(nums[i], nums[j]);
         }
         swap(nums[i],nums[j]);
         j = nums.size()-1;
         while(i < j) {
             while(i < j && nums[i] == 1)i++;
             while(j >= 0 && nums[j] != 1)j--;
             swap(nums[i], nums[j]);
         }
         swap(nums[i],nums[j]);
    }
};
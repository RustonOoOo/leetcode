//https://leetcode.com/problems/container-with-most-water/
//https://discuss.leetcode.com/topic/35117/share-my-short-java-code-with-%E4%B8%AD%E6%96%87-explanation/7
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1;
        int max = std::min(height[i],height[j]);
        while(i < j) {
            int h = std::min(height[i],height[j]);
            max = std::max(max, (j-i)*h);
            while(i < j && height[i] <= h)i++;
            while(j > i && height[j] <= h)j--;
        }
        return max;
    }
};
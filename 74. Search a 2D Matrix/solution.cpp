//https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int lo = 0, hi = rows*cols-1;
        while(lo <= hi) {
            int mid = lo + (hi-lo)/2;
            int elem = matrix[mid/cols][mid%cols];
            if(elem == target)return true;
            else if(elem < target)lo = mid + 1;
            else hi = mid - 1;
        }
        return false;
    }
};
//https://leetcode.com/problems/minimum-path-sum/
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> cache(grid.size(), vector<int>(grid[0].size(),0));
        cache[0][0] = grid[0][0];
        for(int i = 1; i < grid.size();i++) {//first colum
            cache[i][0] += cache[i-1][0] + grid[i][0];
        }
        for(int j = 1; j < grid[0].size(); j++) {//first row
            cache[0][j] += cache[0][j-1] + grid[0][j];
        }
        for(int i = 1; i < grid.size(); i++) {
            for(int j = 1; j < grid[0].size();j++) {
                    cache[i][j] = min(cache[i-1][j],cache[i][j-1] ) + grid[i][j];
            }
        }
        return cache[grid.size()-1][grid[0].size()-1];
    }
};
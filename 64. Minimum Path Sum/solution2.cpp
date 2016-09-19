//https://leetcode.com/problems/minimum-path-sum/
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> cache(grid.size(),vector<int>(grid[0].size(),-1));
        cache[0][0] = grid[0][0];
        for (int i = 1; i < grid.size(); i++)
            cache[i][0] = cache[i - 1][0] + grid[i][0];
        for (int j = 1; j < grid[0].size(); j++)
            cache[0][j] = cache[0][j - 1] + grid[0][j];
        return minPathSum(grid,cache,grid.size()-1,grid[0].size()-1);
    }
    int minPathSum(vector<vector<int>>& grid,
                vector<vector<int>>& cache,int i, int j) {
        if(cache[i][j] >= 0)
            return cache[i][j];
        return cache[i][j] = std::min(minPathSum(grid,cache,i-1,j), minPathSum(grid,cache,i,j-1))+grid[i][j];
    }
};
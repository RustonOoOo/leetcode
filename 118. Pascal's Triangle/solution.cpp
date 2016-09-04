class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> yanghui_triangle;
        for(int i = 1; i <= numRows; i++) {
            vector<int> level(i, 0);
            level[0] = 1;
            level[i - 1] = 1;
            for(int j = 1; j < i - 1; j++) {
                level[j] = yanghui_triangle[i - 2][j] + yanghui_triangle[i-2][j-1];
            }
            yanghui_triangle.push_back(std::move(level));
        }
        return yanghui_triangle;
    }
};
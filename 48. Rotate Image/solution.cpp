
//https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int sz = matrix.size();
        vector<vector<int>>copy(sz, vector<int>(sz,0));
        for(int i = 0; i < sz;i++) {
            for(int j = 0; j < sz; j++) {
                copy[j][sz-i-1] = matrix[i][j];
            }
        }
        matrix = std::move(copy);
    }
};
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>, std::function<bool(int,int)>> 
        q([](int a, int b){return a > b;});
        int n = matrix.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                q.push(matrix[i][j]);
            }
        }
        int res = 0;
        for(int i = 0; i < k; i++) {
            res = q.top();q.pop();
        }
        return res;
    }
};
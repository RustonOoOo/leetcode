//https://leetcode.com/problems/combinations/
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
         vector<vector<int>> result;
         combine(result,vector<int>(),1, n, k);
         return result;
    }
    void combine(vector<vector<int>>&result, vector<int> v, int start, int n,int k) {
        if(k == 0) {
            result.push_back(std::move(v));
            return;
        }
        for(int i = start; i <= n; i++) {
            v.push_back(i);
            combine(result, v, i+1, n, k-1);
            v.pop_back();
        }
    }
};
class Solution {
    //vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        //return aux(k ,n, 0, vector<int>());
        vector<int> v;
        aux(res,k,n,1,v);
        return res;
    }
    void aux(vector<vector<int>>& res ,int k, int n,int s,vector<int> v) {
        if(k < 0 || n < 0)return;
        if(k == 0 && n == 0){res.push_back(v);}
        for(int i = s; i < 10; i++) {
            v.push_back(i);
            aux(res,k-1, n - i, i+1, v);
            v.erase(--v.end());//*!!£¿because the path fails
        }
    }
};
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        aux("", res, n, 0);
        return res;
    }
    void aux(string s,vector<string>& vec,int n,int m) {
        if(m == 0 && n == 0){
            vec.push_back(s);
            return;
        }
        if(m > 0)aux(s+")", vec, n, m - 1);
        if(n > 0)aux(s+"(", vec, n - 1, m + 1);
    }
};
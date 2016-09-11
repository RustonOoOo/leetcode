class Solution {
public:
    string convertToTitle(int n) {
        string res;
        while(n) {
            int mod = n % 26;
            if(mod == 0)
                res = 'Z' + res,n = n / 26 - 1;
            else
                res = char('A' + mod - 1) + res,
                n = n / 26;
        }
        return res;
    }
};
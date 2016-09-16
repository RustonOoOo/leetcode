
//see "https://discuss.leetcode.com/topic/8398/dp-solution-in-6-lines-with-explanation-f-i-n-g-i-1-g-n-i/2"
class Solution {
public:
    int numTrees(int n) {
        vector<int> d(n+1,0);
        d[0] = 1,d[1] = 1;
        for(int i = 2; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                d[i] += d[j-1] * d[i-j];
            }
        }
        return d[n];
    }
};
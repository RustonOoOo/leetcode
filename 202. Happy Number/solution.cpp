class Solution {
public:
    int digitSquare(int n) {
        int val = 0;
        for(int i = n; i ; i /= 10) {
            int rem = i % 10;
            val += rem*rem;
        }
        return val;
    }
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n != 1) {
            n = digitSquare(n);
            if(set.find(1) != set.end()) {
                return true;
            }
            else if(set.find(n) != set.end())
                return false;
            set.insert(n);
        }
        return true;
    }
};
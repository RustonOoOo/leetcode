class Solution {
public:
    int addAll(int num) {
        int val = 0;
        while (num) {
            val += num % 10;
            num /= 10;
        }
        return val;
    }

    int addDigits(int num) {
        int val = addAll(num);
        while (val / 10) {
            val = addAll(val);
        }
        return val;
    }
};
